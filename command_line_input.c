/* This program works only in the real time process and 
 * you get error in the downloadable kernel module....
 * To give input make sure simulator is connected 
 * To get the command input through the debug(run) launch configuration
 * argv[0] displays the project directory i.e upto vxe file
 * Each argument is seperated by space only
 */

#include <stdio.h>
#include <stdlib.h>

int main
    (
    int	   argc,	/* number of arguments */
    char * argv[],	/* array of arguments */
    char * envp[],	/* array of environment strings */
    void * auxp		/* implementation specific auxiliary vector */
    )
    {
	int i=1;
   printf("the argument is %s\n",argv[0]); 
   /*It executes until all the command argument are
    * being printed..
    */
   while (argc > 1)
   {
	   printf("the argument given is %s\n",argv[i]);
	   i++;
	   argc--;
   }
    
    return 0;
    }
