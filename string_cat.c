/* This program is to demonstrate the use of 
 * the String concatenation operation....
 */


#include <vxWorks.h>
#include <string.h>
#include <stdio.h>

void string1 (char f[1]);

void main(void)
{
	char s[1]="d";
	string1("l");
}


void  string1(char f[1])
{
	char s1[6]="atch";
	char s2[1]="\r";
	printf("The value of f %s\n",f);
	strncat(s1,f,1); /* Concatenate to the specified byte in the third argument*/
	printf("The value after first concante %s\n",s1);
	strcat(s1,s2);	/* Concatenate the entire string */
	printf("Second concatenate %s\n",s1);
	
	exit(0);
}
