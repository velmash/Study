//
//  BaseService.swift
//  ExReactorKit
//
//  Created by 윤형찬 on 6/7/24.
//

import Foundation

class BaseService {
    unowned let provider: ServiceProviderProtocol
    
    init(provider: ServiceProviderProtocol) {
        self.provider = provider
    }
}
