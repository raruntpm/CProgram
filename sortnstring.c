#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void stringcpy(char dest[], char src[])
{
	int i = 0;
	char c;

//	while((dest[i] = src[i]) != '\0')
//		i++;
	while(src[i] != '\0')
	{
		c = src[i];
		dest[i] = c;
		i++;
	}
}
int main()
{
	char *days[] = {"Mon", "Tue", "Wed", "Thr", "Fri", "Sat", "Sun"};
	char temp[10];
	int i,j;

	for(i=0; i<7; i++)
		for(j=i+1;j<7-1; j++)
		{
			if(strcmp(days[i],days[j])>0)
			{
				stringcpy(temp,days[i]);
				stringcpy(&days[i],days[j]);
				stringcpy(days[j], temp);
			}
		}
	

	for(i=0; i<7; i++)
		printf("%s\t", days[i]);

}
