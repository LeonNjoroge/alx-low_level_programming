section .data
    hello db "Hello, Holberton", 0
    format db "%s\n", 0

section .text
    extern printf
    global main

main:
    mov rdi, format
    mov rsi, hello
    call printf

    ; Exit the program
    mov rax, 60         ; syscall: exit
    xor rdi, rdi        ; status: 0
    syscall
