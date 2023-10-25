	global	main
		extern	printf
		section	.text
main:	push	rbx	;Call stack must be aligned
		lea	rdi, [rel message] ; first argument
		cal	printf	;message
		xor	eax,eax
		pop	rbx
		ret

		section	.data
message:	db	"Hello, Holberton", 10, 0

