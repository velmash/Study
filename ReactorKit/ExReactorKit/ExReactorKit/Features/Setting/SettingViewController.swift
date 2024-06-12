//
//  SettingViewController.swift
//  ExReactorKit
//
//  Created by 윤형찬 on 6/7/24.
//

import UIKit

import SnapKit
import Then
import ReactorKit
import RxSwift
import RxCocoa

final class SettingViewController: UIViewController, View {

    // MARK: - Typealias
    typealias Reactor = SettingViewReactor
    
    // MARK: - Views
    var button: UIButton = UIButton(configuration: .borderedProminent())
    var userButton: UIButton = UIButton(configuration: .borderedProminent())
    
    // MARK: - Properties
    var disposeBag: DisposeBag = DisposeBag()
    
    // MARK: - Intializer
    convenience init(reactor: SettingViewReactor) {
        self.init()
        self.reactor = reactor
    }
    
    // MARK: - LifeCycles
    override func viewDidLoad() {
        super.viewDidLoad()
        setupUI()
        setupAutoLayout()
        setupAttributes()
    }
    
    // MARK: - Reactor
    func bind(reactor: SettingViewReactor) {
        button.rx.tap
            .map { Reactor.Action.didTapButton }
            .bind(to: reactor.action)
            .disposed(by: disposeBag)
        
        userButton.rx.tap
            .map { Reactor.Action.didTapUserButton }
            .bind(to: reactor.action)
            .disposed(by: disposeBag)
        
        reactor.state.map { $0.backgroundColor }
            .distinctUntilChanged()
            .bind(to: view.rx.backgroundColor)
            .disposed(by: disposeBag)
        
        reactor.pulse(\.$userViewController)
            .compactMap { $0 }
            .bind(with: self) { owner, vc in
                owner.navigationController?.pushViewController(vc, animated: true)
            }
            .disposed(by: disposeBag)
    }
    
    // MARK: - Attributes
    func setupUI() {
        view.addSubview(button)
        view.addSubview(userButton)
    }
    
    func setupAutoLayout() {
        button.snp.makeConstraints {
            $0.center.equalToSuperview()
        }
        
        userButton.snp.makeConstraints {
            $0.centerX.equalToSuperview()
            $0.top.equalTo(button.snp.bottom).offset(20)
        }
    }
    
    func setupAttributes() {
        button.do {
            $0.setTitle("색상 바꾸기", for: .normal)
        }
        
        userButton.do {
            $0.setTitle("유저 화면", for: .normal)
        }
    }
}
