#include <stdio.h>

int main()
{
	int i,j,sum;
	int a[4][4];

	//Getting the Matrix values
	printf("Enter the 4 x 4 matrix\n");
	for(i=0; i<4; i++)
		for(j=0; j<4; j++)
			scanf("%d",&a[i][j]);

	//Summing all the rows
	for(i=0; i<4; i++)
	{
		sum = 0;
		for(j=0; j<4; j++)
		{
			sum = sum + a[i][j];
		}
		if(sum != 34)
		{
			printf("this is not magic square\n%dth rows not equal to 34 \n", i);
			return 1;
		}
	}


	//Summing all the columns
	for(i=0; i<4; i++)
	{
		sum = 0;
		for(j=0; j<4; j++)
		{
			sum = sum + a[j][i];
		}
		if(sum != 34)
		{
			printf("this is not magic square\n%dth columns not equal to 34\n",j);
			return 1;
		}
	}

	//checking the left side diagonal
	sum=0;
	for(i=0; i<4;i++)
		sum = sum + a[i][i];
	if(sum != 34)
		printf("Not magic square\n Left side diagonal not equal\n");

	//right side diagonal
	sum = 0;
	for(i=0,j=3;i<4;i++,j--)
		sum = sum + a[i][j];
	if(sum != 34)
		printf("Not magic square\n Right side diagonal not equal\n");

	printf("this is magic square\n");
	return 0;
}
