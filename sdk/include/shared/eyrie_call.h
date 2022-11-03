#ifndef __EYRIE_CALL_H__
#define __EYRIE_CALL_H__

// Syscalls that get passed down to the SM
#define RUNTIME_SYSCALL_UNKNOWN             1000
#define RUNTIME_SYSCALL_OCALL               1001
#define RUNTIME_SYSCALL_SHAREDCOPY          1002
#define RUNTIME_SYSCALL_ATTEST_ENCLAVE      1003
#define RUNTIME_SYSCALL_GET_SEALING_KEY     1004
#define RUNTIME_SYSCALL_CLAIM_MMIO          1005
#define RUNTIME_SYSCALL_RELEASE_MMIO        1006
#define RUNTIME_SYSCALL_EXIT                1101

// Runtime syscalls
#define RUNTIME_SYSCALL_YIELD_MAIN_THREAD   2000

#endif  // __EYRIE_CALL_H__
