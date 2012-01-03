#include <stdio.h>

/* count tabs, blanks, and lines in input */

main()
{
	int c, tabs, blanks, lines;
	while ((c= getchar()) != EOF)
	{
		if (c == '\n')
			++lines;
		if (c == '\t')
			++tabs;
		if (c == ' ')
			++blanks;
	}
	printf("Total lines: %d\n", lines);
	printf("Total tabs: %d\n", tabs);
	printf("Total blanks: %d\n", blanks);	
}