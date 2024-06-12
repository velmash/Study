//
//  String+Extension.swift
//  ExReactorKit
//
//  Created by 윤형찬 on 6/7/24.
//

import Foundation

extension String {
    var isNumber: Bool {
        return self.range(
            of: ".*[0-9]+.*",
            options: .regularExpression) != nil
    }
}
