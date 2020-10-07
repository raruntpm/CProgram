#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int c;
	
	FILE *fptr, *ofptr;
	fptr = fopen (argv[1], "r");
	ofptr = fopen ("withoutcomment.c", "w");
		
	while ((c = fgetc(fptr)) != EOF) {
		if( c == '/' )
		{
			c = fgetc(fptr);	//Read the character next to '/'
			//Checking for single line comment
			if( c == '/')	//Check if it double slash
			{
				while((c= fgetc(fptr)) != '\n');	//Loop till end of line
				fputc(c, ofptr);	//Print the end of line
			}	
			//Check for Multi line comment
			else if(c == '*')
			{
				while(1)	//Loop till "*/" is matched
				{
					c = fgetc(fptr);
					if (c == EOF)	//Check if eof is reached
						break;
					else if( c == '*')
					{
						c = fgetc(fptr);
						if ( c == '/' )
							break;
					}
				}
			}
			// If it is not comment, print both '/' and character
			else	
			{
				fputc('/',ofptr);
				fputc(c, ofptr);
			}
		}
		else	//If it is not slash, print that character
			fputc(c, ofptr);
	}
	fclose(fptr);
	fclose(ofptr);
	return EXIT_SUCCESS;
}
