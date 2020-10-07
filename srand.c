/*This routine resets the seed value used by rand( ). 
 *  If srand( ) is then called with the same seed value,
 *   the sequence of pseudo-random numbers is repeated. */


#include <stdlib.h>
#include <stdio.h>

  int main(void)
  {
    int i;
    srand(23);
    for(i=0; i<10; i++)
    {
      printf("%d \t", rand());
    }
    
    printf("\n\n");
    srand(32);
    for(i=0; i<10; i++)
    {
          printf("%d \t", rand());
	}
    
    printf("\n\n");
    srand(23);
	for(i=0; i<10; i++){
	  printf("%d \t", rand());
	}
	
	printf("\n\n");
	srand(32);
	for(i=0; i<10; i++)
	{
		  printf("%d \t", rand());
	}

    return 0;
  }
