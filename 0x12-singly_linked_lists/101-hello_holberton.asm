section .text
    global main
    extern printf
section .data
    msg db "Hello, Holberton", 0xA, 0
main:
    push rcx
    mov rcx, rsp
    lea rdi, [msg]
    xor rsi, rsi
    call printf
    mov eax, 0
    pop rcx
    ret
