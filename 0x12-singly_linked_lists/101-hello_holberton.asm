section .data

extern printf

message:   db "Hello, Holberton", 10, 0
format:    db "%s", 0

section .code

global main

main:
      push rbp
      mov rsi, format
      mov rdi, message
      call printf
      mov rax, 0
      pop rbp
      ret
