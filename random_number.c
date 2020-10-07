/*Random number generation between 50 and 25*/

#include <vxWorks.h>
#include <stdio.h>
#include <sockLib.h>
 void main_task()
{
	int i,j;
	i=(rand()%(50-25+1))+25;
	printf(" First Random Number is %d\n",i);
	j=(rand()%(50-25+1))+25;
	printf("Second Random Numberis %d\n",j);
}
