//
//  UserService.swift
//  ExReactorKit
//
//  Created by 윤형찬 on 6/12/24.
//

import Foundation
import RxSwift

protocol UserServiceProtocol {
    func fetchUserData() -> Observable<User>
}

final class UserService: BaseService, UserServiceProtocol {
    func fetchUserData() -> Observable<User> {
        // User 데이터를 가져오는 로직 구현
        return Observable.just(User(name: "John Doe"))
    }
}
