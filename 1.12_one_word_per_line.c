#include <stdio.h>

/* Take in input, return the input one word at a time */

#define IN 1
#define OUT 0

main()
{
	int c, state;
	state = OUT;
	while ( ( c = getchar() ) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			if (state == OUT)
				;
			else {
				printf("\n");
				state = OUT;				
			}
		}
		else {
			state = IN;
			putchar(c);
		}
	}
}
