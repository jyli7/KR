#include <stdio.h>

/*Initialize an array that holds the length of each word.
Cycle through the array. If the value in the array is larger than the test value, then print a '+'
in the index of the array. */

#define IN 1
#define OUT 0

main()
{
	int c, i, j, state, upward_counter;
	int chars[26];
	state = OUT;
	upward_counter = 0;
	
	for (i=0; i < 26; ++i)
		chars[i] = 0;
	
	while ( ( c = getchar() ) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			if (state == OUT)
				;
			else {
				state = OUT;
			}
		}
		else {
			state = IN;
			++chars[c-'a'];
		}
	}
	
	for (i=0; i < 26; ++i)
	{
		while (upward_counter < chars[i])
		{
			printf("+");
			++upward_counter;			
		}
		printf("\n");
		upward_counter = 0;
	}
}
