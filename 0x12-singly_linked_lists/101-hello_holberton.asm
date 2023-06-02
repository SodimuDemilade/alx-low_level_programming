section .data
	myvar db 'Hello, Holberton', 10
	format db "%s", 0

section .text
	global _start

_start:
	mov rax, 1
	mov rdi, 1
	mov rsi, myvar
	mov rdx, 13
	syscall
	
	mov rax, 60
	mov rdi, 0
	syscall
