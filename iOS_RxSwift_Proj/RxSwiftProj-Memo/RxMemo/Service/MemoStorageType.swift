//
//  MemoStorageType.swift
//  RxMemo
//
//  Created by 윤형찬 on 2021/05/18.
//

import Foundation
import RxSwift

protocol MemoStorageType {
     @discardableResult
     func createMemo(content: String) -> Observable<Memo>
     
     @discardableResult
     func memoList() -> Observable<[MemoSectionModel]>
     
     @discardableResult
     func update(memo: Memo, content: String) -> Observable<Memo>
     
     @discardableResult
     func delete(memo: Memo) -> Observable<Memo>
}
