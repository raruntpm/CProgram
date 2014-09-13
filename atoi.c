#include <stdio.h>

int atoi(char s[])
{
	int i, n=0;

	for(i=0; s[i] >= '0' && s[i] <= '9'; i++)
		n = 10 * n + (s[i] - '0');
	return n;
}

int main()
{
	char str1[]="123";
	printf("The atoi of string 123 is %d\n", atoi(str1));
	return 0;
}
