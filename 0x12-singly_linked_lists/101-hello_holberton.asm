; Writes "Hello, Holberton\n" to the console using only system calls. Runs on 64-bit Linux only.

				global		main
				extern		printf

				section 	.text
main:
				mov 		rsi, message
				mov 		rdi, fmt
				mov 		rax, 0
				call 		printf
				ret

				section		.data
message:		db 			"Hello, Holberton", 10, 0
fmt:			db			"%s", 0
