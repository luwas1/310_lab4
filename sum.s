.section .text
.globl sum_array

sum_array:
    movl $0, %eax
    movq $0, %rcx

sum_loop:
    cmpq %rsi, %rcx
    jge sum_done

    addl (%rdi,%rcx,4), %eax

    incq %rcx
    jmp sum_loop

sum_done:
    ret

.section .note.GNU-stack,"",@progbits