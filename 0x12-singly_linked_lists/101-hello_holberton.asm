extern printf
global main

section .data

	msg db "Hello, Holberton", 10

section .text
main:
	mov edi, msg
	mov eax, 0
	call printf
	mov eax, 0
ret
