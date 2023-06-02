section .data
	myvar db 'Hello, Holberton', 0
	format db "%s", 0

section .text
	global _start

_start:
	mov rdi, format
	mov rsi, myvar
	xor rax, rax

	call printf

	mov eax, 60
	xor edi, edi
	syscall

section .data
	extern printf
