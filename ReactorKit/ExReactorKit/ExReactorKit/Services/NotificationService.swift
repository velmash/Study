//
//  NotificationService.swift
//  ExReactorKit
//
//  Created by 윤형찬 on 6/12/24.
//

import Foundation
import RxSwift

protocol NotificationServiceProtocol {
    func sendNotification(message: String) -> Observable<Bool>
}

final class NotificationService: BaseService, NotificationServiceProtocol {
    func sendNotification(message: String) -> Observable<Bool> {
        // 여기서 실제로 알림을 보내는 로직을 구현합니다.
        print("Notification sent with message: \(message)")
        return Observable.just(true)
    }
}
