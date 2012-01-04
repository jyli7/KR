#include <stdio.h>

/* This programs does two things
1) It removes any trailing whitespace after a line (replaces each space with an 'X')
2) It deletes blank lines (replaces all whitespace with an 'X')
*/

#define MAXLINE 1000
int getline2(char line[], int maxline);
void deleteWhitespace(char line[], int len);
	/* Write a readline function
	Write a "get rid of trailing whitespace" function
	*/
main() {
	int len;
	char line[MAXLINE];
	while ((len = getline2(line, MAXLINE)) > 0)
	{
		deleteWhitespace(line, len);
		printf("%s", line);
	}
}

int getline2(char s[], int lim)
{
	int c, i;
	
	for (i=0; i<lim-1 && (c = getchar()) != EOF && c!='\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void deleteWhitespace(char s[], int len)
{
	int i;
	for (i = (len-2); i >= 0; --i) {
		if (s[i] == ' ' || s[i] == '\t' || s[i] == 'a')
		{
			s[i] = 'X';		
		}
		else
			break;
	}
}