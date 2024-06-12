//
//  ServiceProvider.swift
//  ExReactorKit
//
//  Created by 윤형찬 on 6/12/24.
//

import Foundation

protocol ServiceProviderProtocol: AnyObject {
    var settings: SettingServiceProtocol { get }
    var user: UserServiceProtocol { get }
    var notification: NotificationServiceProtocol { get }
}

final class ServiceProvider: ServiceProviderProtocol {
    lazy var settings: SettingServiceProtocol = SettingService(provider: self)
    lazy var user: UserServiceProtocol = UserService(provider: self)
    lazy var notification: NotificationServiceProtocol = NotificationService(provider: self)  // 새로운 서비스 추가
}
