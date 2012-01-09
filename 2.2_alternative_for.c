#include <stdio.h>

#define MAX_STRING_LENGTH 100

int main(void)
{
	int i, c, lim = MAX_STRING_LENGTH;
	char s[MAX_STRING_LENGTH];

	for (i=0; i<lim-1; ++i){
		if ((c=getchar()) == '\n')
			break;
		else if (c == EOF)
			break;
		else
			s[i] = c;
	}

	s[i] = '\0';
	return 0;
		
}

