#include <stdio.h>

/* Pseudocode
1) Count the number of blanks
2) Replace the appropriate # of blanks with tabs, e.g. 2 blanks = tab. 
3) Print out the character
*/

#define BLANKS 2
#define MAXLINE 1000

int getline2(char line[], int maxline);
void tab_replace(char line[], int len);
void clear_line(char line[], int len);

main() {
	int len;
	char line[MAXLINE];
	char new_line[MAXLINE];
	while ((len = getline2(line, MAXLINE)) > 0)
	{
		tab_replace(line, len);
		printf("%s\n", line);
		clear_line(line, len);
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

void tab_replace(char s[], int len)
{
	int i, j, k;
	for (i = 0; i < len - 1; ++i) {
		if (s[i] == ' ' && s[i+1] == ' ' && s[i+2] == ' '){
			s[i] = '\t';
			for (j = i; j < len - 3; ++j)
			{
				s[j+1] = s[j+3];
				s[j+2] = s[j+4];
			}
			s[len-1] = ' ';
			s[len-2] = ' ';
			--len;
		}	
	}
}

void clear_line(char s[], int len)
{
	int i;
	for (i = 0; i < len; ++i) {
		s[i] = ' ';
	}
}