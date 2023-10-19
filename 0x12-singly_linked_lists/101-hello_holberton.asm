SECTION .data
greeting db "Hello, Holberton", 0
format_str db "%s", 10, 0

SECTION .text
extern printf
global main

main:
    mov rsi, greeting
    mov rdi, format_str
    mov rax, 0
    call printf

    mov rax, 0
    ret
