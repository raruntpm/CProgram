#include <stdio.h>

int main(int argc, char *argv[])
{
	FILE *fptr;
	int noc = 0, now = 0, nol = 0, c;
	
	fptr = fopen (argv[1], "r");
	
	while((c=getc(fptr)) != EOF)
	{
		noc++;
		if( c == '\n')	// Lines
		{
			now++;
			nol++;
		}
		else if( c == ' ')	//words
			now++;			
	}
	fclose(fptr);
	printf("The no.of character %d\n", noc);
	printf("The no.of word %d\n", now);
	printf("The no.of lines %d\n", nol);
	return 0;
}