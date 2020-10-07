#include <vxWorks.h>
#include <math.h>
#include <float.h>
#include <stdio.h>
void math()
{
	int i;
	double b;
	
	/* smallest integer greater than or equal to a specified value */
	i= ceil(4.3);
	printf("the value of i using ceil is %d\n",i);
	
	/* It gives largest integer less than or equal to a specified value */
	i= floor(4.3);
	printf("the value of i using floor is %d\n",i);
	
	i= fabs (4.9);
	printf("the value of i using fabs is %d\n",i);
	
	/* It gives modulus of 15 and 4 */
	i= fmod (15,4);
	printf("The modulus value of 15,4 is %d\n",i);
	
	/* It gives result by multiply a number by an integral power of 2 
	  ( 3 * 2^5 ) 	*/
	i= ldexp(3,5);
	printf("The exponent value of 3,5 is %d\n",i);
	
	/* It finds the power of the operand */
	i= pow (3,5);
	printf("The power of 3 raised to 5 is %d\n",i);
	
	
}
