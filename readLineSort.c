#include <stdio.h>

int readLines(char *s, int lim);
int strindex(char s[], char t[]);
int main()
{
	char line[50];

	printf("enter the lines");
	//Loop fails when Ctrl + D is pressed.
	while(readLines(line,50)>0)
	{
		//Check for the pattern matching
		if(strindex(line,"ould")>=0)
		{
			printf("%s",line);
		}
	}
	printf("End of program\n");
	return 0;
}

int readLines(char s[], int lim)
{
	int i=0;
	int c;
	//Store the character to string
	while(--lim>0 && (c=getchar()) != EOF && c !='\n')
		s[i++] = c;
	if(c == '\n')
		s[i++]= c;
	s[i] = '\0';
	return i;
}

int strindex(char s[], char t[])
{
	int i, j, k;

	//Loop till the end of line
	for(i=0; s[i] != '\n'; i++)
	{
		for(j=i,k=0; t[k] != '\0' && s[j]==t[k]; j++, k++);
		//Pattern is said to matched, when k is greater than 0
		// and t[k] reaches the end of string
		if(k >0 && t[k] == '\0')
			return i;
	}
	return -1;  // Return -1 if pattern is not matched
}
