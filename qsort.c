/* This program is to demonstrate the use of
 * "qsort" function. Depends on the compare
 * function we can declare it as either ascending
 * or descending function....
 */

#include <stdlib.h>
#include <stdio.h>

int ascending (const void *a, const void *b)
{
	return *(int *)a - *(int *)b;
}
int descending (const void *a, const void *b)
{
	return *(int *)b - *(int *)a;
}
  int main()
  {
	  int i;
	  int num[5]= {2,31,4,54,0};
	  qsort (num,5,sizeof(int),ascending);
	  printf("the ascending order\n");
	  for(i=0;i<5;i++)
	  printf("%d\n",num[i]);
	  
	  qsort (num,5,sizeof(int),descending);
	  printf("\nthe descending order\n");
	  for(i=0;i<5;i++)
	  printf("%d\n",num[i]);
	  
  }









//int main()
//{
//	int i =6, num;
//	num = fib(6);
//	
//	printf("the fibbonacci number is %d\n",num);
//	
//}
//int fib(int a)
//{
//	int h;
//	h= fib(a-1)+ fib(a-2);
//	return h;
//}
