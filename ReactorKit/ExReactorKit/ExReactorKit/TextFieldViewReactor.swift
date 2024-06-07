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
    }
    
    enum Mutation {
        case setLengthOfString(Int)
        case setCapitalizedString(String)
    }
    
    struct State {
        var backgroundColor: UIColor?
        
        var capitalizedString: String?
        var lengthOfString: Int?
    }
    
    var initialState: State
    
    init(
        backgroundColor color: UIColor? = nil
    ) {
        self.initialState = State(
            backgroundColor: color
        )
    }
    
    func mutate(action: Action) -> Observable<Mutation> {
        switch action {
        case let .inputField(input):
            let lengthOfString = input.count
            let capitalizedString = input.uppercased()
            return Observable<Mutation>.concat(
                Observable.just(.setLengthOfString(lengthOfString)),
                Observable.just(.setCapitalizedString(capitalizedString))
            )
        }
    }
    
    func reduce(state: State, mutation: Mutation) -> State {
        var newState = state
        switch mutation {
        case let .setLengthOfString(length):
            newState.lengthOfString = length
        case let .setCapitalizedString(string):
            newState.capitalizedString = string
        }
        
        return newState
    }
}
