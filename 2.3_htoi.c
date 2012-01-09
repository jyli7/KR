#include <stdio.h>

int atoi(char s[]);

int main(void)
{
	int result = htoi("1f");
	printf("%d", result);

	result = htoi("0X1f");
	printf("%d", result);
}

int atoi(char s[])
{
	int i, n;
	
	n = 0;
	for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
		n = 10*n + (s[i]-'0');
	return n;
}

int htoi(char s[])
{
	int i, n;
	
	n = 0;
	i = 0;
	if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X'))
		i = 2;
	for (i; (s[i] >= '0' && s[i] <= '9') || (s[i] >= 'a' && s[i] <= 'f') || (s[i] >= 'A' && s[i] <= 'F'); ++i){
		if (s[i] >= '0' && s[i] <= '9')
			n = 16*n + (s[i]-'0');
		else if (s[i] >= 'A' && s[i] <= 'F')
			n = 16*n + (s[i]-'A' + 10);
		else
			n = 16*n + (s[i]-'a' + 10);
	}
	return n;
}