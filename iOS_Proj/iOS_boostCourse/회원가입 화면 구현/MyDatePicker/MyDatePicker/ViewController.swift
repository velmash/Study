//
//  ViewController.swift
//  MyDatePicker
//
//  Created by 윤형찬 on 2021/02/17.
//

import UIKit

class ViewController: UIViewController {
    
    @IBOutlet weak var datePicker: UIDatePicker!
    @IBOutlet weak var dateLabel: UILabel!
    
    let dateFormatter: DateFormatter = {
        let formatter: DateFormatter = DateFormatter()
        formatter.dateStyle = .medium
        formatter.timeStyle = .medium
        // formatter.dateFormat = "yyyy/MM/dd hh:mm:ss"
        return formatter
    } ()
    
    @IBAction func tapView(_ sender: UITapGestureRecognizer) {
        print("Tapped")
    }
    
    @IBAction func didDatePickerValueChanged(_ sender: UIDatePicker) {
        print("value change")
        
        let date: Date = sender.date
        let dateString: String = self.dateFormatter.string(from: date)
        
        self.dateLabel.text = dateString
    }

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        
        self.datePicker.addTarget(self, action: #selector(didDatePickerValueChanged(_:)), for: UIControl.Event.valueChanged)
        
        // 액션 타깃을 통한 제스처 인식기 초기화 및 생성
        let tapRecognizer = UITapGestureRecognizer(target: self, action: #selector(tabView2(gestureRecognizer:)))
        // 뷰에 제스처 인식기 연결하기
        self.view.addGestureRecognizer(tapRecognizer)
    }
    
    @objc func tabView2(gestureRecognizer: UIGestureRecognizer) {
        print("Tapped")
    }

}

