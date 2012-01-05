#include <stdio.h>

/* Pseudocode
1) Read in each character
2) If the character is '\t', then replace it with the appropriate number of spaces
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
	int i, j, k, tab_count;
	int jump_spaces = BLANKS + 1;
	int match_backward = BLANKS;
	tab_count = 1;
	int spaces_count = jump_spaces * tab_count;
	for (i = 0; i < len - 1; ++i) {
		if (s[i] == '\t'){
			for (j = (len + spaces_count); j >= (i+ jump_spaces); --j)
			{
				s[j] = s[j-match_backward];
				++tab_count;
			}
			for (k=i; k <= (i+BLANKS); ++k)
			{
				s[k] = ' ';
			}			
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