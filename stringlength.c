#include <stdio.h>

int strlen(char s[])
{
	int i=0;
	while(s[i] != '\0')
		++i;
	return i;

}

int main()
{
	char str1[]="Hello";
	printf("the length of str1 is %d\n", strlen(str1));
	return 0;

}
