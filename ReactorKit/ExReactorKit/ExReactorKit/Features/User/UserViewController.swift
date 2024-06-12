//
//  UserViewController.swift
//  ExReactorKit
//
//  Created by 윤형찬 on 6/12/24.
//

import UIKit
import ReactorKit
import RxSwift
import RxCocoa

final class UserViewController: UIViewController, View {
    typealias Reactor = UserViewReactor
    
    var disposeBag: DisposeBag = DisposeBag()
    
    var userNameLabel: UILabel = UILabel()
    var notificationButton: UIButton = UIButton(type: .system)
    
    convenience init(reactor: UserViewReactor) {
        self.init()
        self.reactor = reactor
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        setupUI()
    }
    
    func bind(reactor: UserViewReactor) {
        reactor.action.onNext(.fetchUserData)
        
        reactor.state.map { $0.user?.name }
            .bind(to: userNameLabel.rx.text)
            .disposed(by: disposeBag)
        
        notificationButton.rx.tap
            .map { Reactor.Action.sendNotification("Hello, ReactorKit!") }
            .bind(to: reactor.action)
            .disposed(by: disposeBag)
        
        reactor.state.map { $0.notificationStatus }
            .subscribe(onNext: { status in
                if let status = status, status {
                    print("Notification sent successfully")
                } else {
                    print("Failed to send notification")
                }
            })
            .disposed(by: disposeBag)
    }
    
    func setupUI() {
        view.backgroundColor = .white
        view.addSubview(userNameLabel)
        view.addSubview(notificationButton)
        
        userNameLabel.snp.makeConstraints { make in
            make.center.equalToSuperview()
        }
        
        notificationButton.snp.makeConstraints { make in
            make.top.equalTo(userNameLabel.snp.bottom).offset(20)
            make.centerX.equalToSuperview()
        }
        
        notificationButton.setTitle("Send Notification", for: .normal)
    }
}
