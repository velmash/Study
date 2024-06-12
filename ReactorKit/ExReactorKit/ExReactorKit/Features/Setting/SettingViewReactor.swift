//
//  SettingViewReactor.swift
//  ExReactorKit
//
//  Created by 윤형찬 on 6/7/24.
//

import UIKit
import ReactorKit
import RxSwift

final class SettingViewReactor: Reactor {
    // MARK: - Action
    enum Action {
        case didTapButton
        case didTapUserButton
    }
    
    // MARK: - Mutation
    enum Mutation {
        case setBackgroundColor(UIColor?)
        case pushUserViewController(UIViewController?)
    }
    
    // MARK: - State
    struct State {
        var backgroundColor: UIColor?
        @Pulse var userViewController: UIViewController?
    }
    
    // MARK: - Properties
    var initialState: State
    var provider: ServiceProviderProtocol
    
    let colors: [UIColor] = [.systemRed, .systemOrange, .systemYellow, .systemTeal, .systemGreen]
    
    // MARK: - Intializer
    init(
        backgroundColor color: UIColor? = nil,
        service provider: ServiceProviderProtocol
    ) {
        self.initialState = State(
            backgroundColor: color
        )
        self.provider = provider
    }
    
    // MARK: - Mutate
    func mutate(action: Action) -> Observable<Mutation> {
        switch action {
        case .didTapButton:
            let color = colors.randomElement()
            provider.settings.setBackgroundColor(color) // ⭐️
            return Observable<Mutation>.just(.setBackgroundColor(color))
        
        case .didTapUserButton:
            let reactor = UserViewReactor(provider: provider)
            let viewController = UserViewController(reactor: reactor)
            return Observable<Mutation>.just(.pushUserViewController(viewController))
        }
    }
    
    // MARK: - Reduce
    func reduce(state: State, mutation: Mutation) -> State {
        var newState = state
        switch mutation {
        case let .setBackgroundColor(color):
            newState.backgroundColor = color
        case let .pushUserViewController(viewController):
            newState.userViewController = viewController
        }
        return newState
    }
}
