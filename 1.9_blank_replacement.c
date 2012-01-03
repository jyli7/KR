#include <stdio.h>

/* count tabs, blanks, and lines in input */

main()
{
	int c;
	int delete = 0;
	while ((c= getchar()) != EOF)
	{
		if (c == ' ')
		{
			if (delete == 1)
				;
			else
			{
				putchar(c);
				delete = 1;
			}	
		}
		else
		{
			delete = 0;
			putchar(c);
		}
	}
}