#include <stdio.h>

/* This programs does two things
1) It removes any trailing whitespace after a line (replaces each space with an 'X')
2) It deletes blank lines (replaces all whitespace with an 'X')
*/

#define MAXLINE 1000
int getline2(char line[], int maxline);
void reverseline(char line[], char new_line[], int len);
void clear_reverse(char s_new[], int len);

main() {
	int len;
	char line[MAXLINE];
	char new_line[MAXLINE];
	while ((len = getline2(line, MAXLINE)) > 0)
	{
		reverseline(line, new_line, len);
		printf("%s\n", new_line);
		clear_reverse(new_line, len);
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

void reverseline(char s[], char s_new[], int len)
{
	int i;
	int new_len = len - 2;
	for (i = new_len; i >= 0; --i) {
		s_new[new_len - i] = s[i];
	}
}

void clear_reverse(char s_new[], int len)
{
	int i;
	for (i = 0; i < len; ++i) {
		s_new[i] = ' ';
	}
}