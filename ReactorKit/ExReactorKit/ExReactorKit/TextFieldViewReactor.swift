//
//  TextFieldViewReactor.swift
//  ExReactorKit
//
//  Created by 윤형찬 on 6/7/24.
//

import UIKit
import ReactorKit
import RxSwift

final class TextFieldViewReactor: Reactor {
    enum Action {
        case inputField(String)
        case didTapSettingButton
    }
    
    enum Mutation {
        case setBackgroundColor(UIColor?)
        
        case setLengthOfString(Int)
        case setCapitalizedString(String)
        
        case showAlertMessage(String)
        case pushSettingViewController(UIViewController?)
    }
    
    struct State {
        var backgroundColor: UIColor?
        
        var capitalizedString: String?
        var lengthOfString: Int?
        
        @Pulse var alertMessage: String?
        @Pulse var settingViewController: UIViewController?
    }
    
    var initialState: State
    var provider: ServiceProviderProtocol
    
    init(
        backgroundColor color: UIColor? = nil,
        service provider: ServiceProviderProtocol
    ) {
        self.initialState = State(
            backgroundColor: color
        )
        self.provider = provider
    }
    
    func transform(mutation: Observable<Mutation>) -> Observable<Mutation> {
        let eventMutation = provider.settings.event
            .flatMap { event in
                switch event {
                case let .setBackgroundColor(color):
                    return Observable<Mutation>.just(.setBackgroundColor(color))
                }
            }
        
        return Observable<Mutation>.merge(mutation, eventMutation)
    }
    
    func mutate(action: Action) -> Observable<Mutation> {
        switch action {
        case let .inputField(input):
            if input.isNumber {
                return Observable<Mutation>.just(.showAlertMessage("소문자를 입력할 수 없습니다."))
            } else {
                let lengthOfString = input.count
                let capitalizedString = input.uppercased()
                return Observable<Mutation>.concat(
                    Observable.just(.setLengthOfString(lengthOfString)),
                    Observable.just(.setCapitalizedString(capitalizedString))
                )
            }
        case .didTapSettingButton:
            let reactor = SettingViewReactor(backgroundColor: currentState.backgroundColor, service: provider)
            let viewController = SettingViewController(reactor: reactor)
            return Observable<Mutation>.just(.pushSettingViewController(viewController))
        }
    }
    
    func reduce(state: State, mutation: Mutation) -> State {
        var newState = state
        switch mutation {
        case let .setBackgroundColor(color):
            newState.backgroundColor = color
        case let .setLengthOfString(length):
            newState.lengthOfString = length
        case let .setCapitalizedString(string):
            newState.capitalizedString = string
        case let .showAlertMessage(message):
            newState.alertMessage = message
        case let .pushSettingViewController(vc):
            newState.settingViewController = vc
        }
        
        return newState
    }
}

extension String {
    var isNumber: Bool {
        return self.range(
            of: ".*[0-9]+.*",
            options: .regularExpression) != nil
    }
}
