#include <stdio.h>
#import <dlfcn.h>
#import <sys/types.h>
#include "PtraceC.h"

#define disable_gdb cDFsdgBmgfghDFE3FGw4

void disable_gdb() {
    __asm(
        "movq $0, %rcx\n"
        "movq $0, %rdx\n"
        "movq $0, %rsi\n"
        "movq $0x1f, %rdi\n"
        "movq $0x200001A, %rax\n"
        "syscall\n"
    );
}

#if defined (__arm64__)
#define prevent_debugger PfdVSCqqteGFWxmSPFAw // Obfuscate function name
void prevent_debugger() {
    asm volatile (
        "mov x0, #26\n" // ptrace syscall (26 in XNU)
        "mov x1, #31\n" // PT_DENY_ATTACH (0x1f) - first arg
        "mov x2, #0\n"
        "mov x3, #0\n"
        "mov x16, #0\n"
        "svc #128\n"    // make syscall
    );
}

#endif
