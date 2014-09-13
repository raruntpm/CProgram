#include <stdio.h>

int power(int base, int n)
{
	int i,p;

	p = 1;
	for(i=0; i<n; i++)
		p = p * base;
	return p;
}

int main()
{
	printf("The power(2, 3) is %d\n", power(2,3));
	return 0;
}
