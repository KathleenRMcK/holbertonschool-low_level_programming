	global main
	section .text
	extern printf

main:	mov	edi, message
	mov	eax, 0
	mov	edx, 17
	call	printf

	section	.data
message:	db "Hello, Holberton", 10
