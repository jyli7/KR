#include <stdio.h>

/* count tabs, blanks, and lines in input */

main()
{
	int c;
	int delete = 0;
	while ((c= getchar()) != EOF)
	{
		if (c == '\t')
			printf("\\t");
		else if (c == '\b')
			printf("\\b");
		else if (c == '\\')
			printf("\\\\");
		else 
			putchar(c);
	}
}