#include <stdio.h>
#include <string.h>

void reverse(char s[])
{
	int c, i, j;

	for(i=0, j=strlen(s)-1; i< j; i++, j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}

int main()
{
	char str1[]="Hello";
	reverse(str1);
	printf("The reverse of Hello is %s\n", str1);
	return 0;
}
