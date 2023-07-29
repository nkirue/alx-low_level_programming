global   main_start
	  extern    printf
main_start:
	  mov   edi, format_message
	  xor   eax, eax
	  call  printf
	  mov   eax, 0
	  ret
format_message: db `Hello, Holberton\n`,0
