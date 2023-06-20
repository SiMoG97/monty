CFLAGS =-Wall -pedantic -Werror -Wextra -std=gnu89

cf:
	gcc $(CFLAGS) *.c -o monty -g

ncf:
	gcc *.c -o monty -g
