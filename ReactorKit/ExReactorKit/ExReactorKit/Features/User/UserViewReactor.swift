//
//  UserViewReactor.swift
//  ExReactorKit
//
//  Created by 윤형찬 on 6/12/24.
//

import ReactorKit
import RxSwift

final class UserViewReactor: Reactor {
    enum Action {
        case fetchUserData
        case sendNotification(String)
    }
    
    enum Mutation {
        case setUserData(User)
        case setNotificationStatus(Bool)
    }
    
    struct State {
        var user: User?
        var notificationStatus: Bool?
    }
    
    var initialState: State
    var provider: ServiceProviderProtocol
    
    init(provider: ServiceProviderProtocol) {
        self.initialState = State()
        self.provider = provider
    }
    
    func mutate(action: Action) -> Observable<Mutation> {
        switch action {
        case .fetchUserData:
            return provider.user.fetchUserData()
                .map { Mutation.setUserData($0) }
                
        case let .sendNotification(message):
            return provider.notification.sendNotification(message: message)
                .map { Mutation.setNotificationStatus($0) }
        }
    }
    
    func reduce(state: State, mutation: Mutation) -> State {
        var newState = state
        switch mutation {
        case let .setUserData(user):
            newState.user = user
        case let .setNotificationStatus(status):
            newState.notificationStatus = status
        }
        return newState
    }
}
