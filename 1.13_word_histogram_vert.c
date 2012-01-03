#include <stdio.h>

/*Initialize an array that holds the length of each word.
Cycle through the array. If the value in the array is larger than the test value, then print a '+'
in the index of the array. */

#define IN 1
#define OUT 0

main()
{
	int c, i, j, state, word_count, c_count;
	int wordslen[10];
	int max_length;
	word_count = c_count = max_length = 0;
	state = OUT;
	
	for (i=0; i < 10; ++i)
		wordslen[i] = 0;
	
	while ( ( c = getchar() ) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			if (state == OUT)
				;
			else {
				wordslen[word_count] = c_count;
				if (c_count > max_length)
					max_length = c_count;
				++word_count;
				c_count = 0;
				state = OUT;
			}
		}
		else {
			state = IN;
			++c_count;
		}
	}
	
	for (i=max_length; i > 0; --i)
	{
		for (j=0; j < 10; ++j)
		{
			if (wordslen[j] >= i)
				printf("+");
			else
				printf(" ");
		}
		printf("\n");
	}
}
