//
//  SettingService.swift
//  ExReactorKit
//
//  Created by 윤형찬 on 6/12/24.
//

import UIKit
import RxSwift

enum SettingEvent {
    case setBackgroundColor(UIColor?)
}

protocol SettingServiceProtocol {
    var event: PublishSubject<SettingEvent> { get }
    
    @discardableResult
    func setBackgroundColor(_ color: UIColor?) -> Observable<UIColor?>
}

final class SettingService: BaseService, SettingServiceProtocol {
    var event: PublishSubject<SettingEvent> = PublishSubject<SettingEvent>()
    
    func setBackgroundColor(_ color: UIColor?) -> Observable<UIColor?> {
        event.onNext(.setBackgroundColor(color))
        return Observable<UIColor?>.just(color)
    }
}
