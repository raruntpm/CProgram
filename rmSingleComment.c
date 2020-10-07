#include <stdio.h>
#include <stdlib.h>

#define PROGRAM 0
#define COMMENT 1
#define QUOTE 2
#define SLASH 3
#define STAR 4
#define LITERAL 5

int main(void)
{
	int c, state;
	char quote;
	state = PROGRAM;
	printf("Enter the program\n");
	while ((c = getchar()) != EOF) {
		if( c == '/' )
		{
			c = getchar();
			if( c == '/')
			{
				while((c= getchar()) != '\n');
				putchar(c);
			}
			else
			{
				putchar('/');
				putchar(c);
			}
		}
		else
			putchar(c);
	}
		
	return EXIT_SUCCESS;
}
