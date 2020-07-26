//
//  File.swift
//  
//
//  Created by Chu Anh Minh on 5/31/20.
//

import PtraceC

struct Security {
    static func disableDebugger() {
        disable_gdb()
    }
}
