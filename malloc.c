#include <vxWorks.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
void hai (char *q);
int main()
{
	int *p;

	p = (int *)malloc(sizeof(int));
	if (p == 0)
	{
		printf("ERROR: Out of memory\n");
		return 1;
	}
	*p = 5;
	printf("%d\n", *p);
	free(p);
	return 0;
}


