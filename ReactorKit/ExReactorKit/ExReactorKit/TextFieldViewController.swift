//
//  TextFieldViewController.swift
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

final class TextFieldViewController: UIViewController, View {
    typealias Reactor = TextFieldViewReactor
    
    var textfield: UITextField = UITextField()
    var capitalizedStringLabel: UILabel = UILabel()
    var lengthOfStringLabel: UILabel = UILabel()
    
    var stackView: UIStackView = UIStackView()
    
    var disposeBag: DisposeBag = DisposeBag()
    
    convenience init(reactor: TextFieldViewReactor) {
        self.init()
        self.reactor = reactor
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        setupUI()
        setupAutoLayout()
        setupAttributes()
    }
    
    override func touchesBegan(_ touches: Set<UITouch>, with event: UIEvent?) {
        textfield.resignFirstResponder()
    }
    
    func bind(reactor: TextFieldViewReactor) {
        textfield.rx.text.orEmpty
            .map { Reactor.Action.inputField($0) }
            .bind(to: reactor.action)
            .disposed(by: disposeBag)
        
        reactor.state.map { $0.capitalizedString }
            .distinctUntilChanged()
            .bind(to: capitalizedStringLabel.rx.text)
            .disposed(by: disposeBag)
        
        reactor.state.compactMap { $0.lengthOfString }
            .map { "\($0)" }
            .distinctUntilChanged()
            .bind(to: lengthOfStringLabel.rx.text)
            .disposed(by: disposeBag)
        
        reactor.state.map { $0.backgroundColor }
            .distinctUntilChanged()
            .bind(to: view.rx.backgroundColor)
            .disposed(by: disposeBag)
        
        reactor.pulse(\.$alertMessage)
            .compactMap { $0 }
            .bind(with: self) {
                $0.showWarningAlert($1)
            }
            .disposed(by: disposeBag)
    }
    
    func setupUI() {
        view.addSubview(stackView)
        stackView.addArrangedSubview(capitalizedStringLabel)
        stackView.addArrangedSubview(lengthOfStringLabel)
        stackView.addArrangedSubview(textfield)
    }
    
    func setupAutoLayout() {
        stackView.snp.makeConstraints { make in
            make.center.equalToSuperview()
            make.horizontalEdges.equalToSuperview().inset(10)
        }
    }
    
    func setupAttributes() {
        view.backgroundColor = UIColor.white
        
        stackView.do { view in
            view.axis = .vertical
            view.alignment = .fill
            view.distribution = .fillProportionally
            view.spacing = 10
        }
        
        textfield.do { view in
            view.borderStyle = .bezel
        }
        textfield.becomeFirstResponder()
    }
}

extension TextFieldViewController {
    func showWarningAlert(_ message: String) {
        textfield.text?.removeAll()
        lengthOfStringLabel.text = "0"
        capitalizedStringLabel.text?.removeAll()
        
        let alert = UIAlertController(
            title: "입력 오류",
            message: message,
            preferredStyle: .alert
        )
        
        let ok = UIAlertAction(title: "확인", style: .default)
        alert.addAction(ok)
        
        present(alert, animated: true)
    }
}
