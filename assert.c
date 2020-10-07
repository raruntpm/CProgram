/*Preventing exceptions rather than handling them is more proactive. Certainly
 * code can check for conditions that would cause an exception and verity arguments
 * to avoid the possibility of task suspension or target reboot...
 * for this we use the assert function.
 * 
 */


#include "stdio.h"
#include "stdlib.h"
#include "assert.h"

char validPtr[]="some string";
char *invalidPtr = (char *)0;
void printAddr (void *ptr)
{
	assert((int) ptr);
	printf("ptr=0x%08x\n",ptr);
	
}

int main(void)
{
	printAddr(validPtr);
	printAddr(invalidPtr);
	return OK;
}
