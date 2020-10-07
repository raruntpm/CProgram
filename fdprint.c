/*This program explains the use of the fdprintf
 * which is in the fiolib.h.
 */

#include <vxWorks.h>
#include <logLib.h>
#include <ioLib.h>
#include <stdio.h>

void fdprint()
{
	int fd;
	int a=1;
	fd=creat("host:F:/hai.txt",O_RDWR);
	
	/*fdprintf writes a formatted string to a specified file descriptor. 
	 *Its function and syntax are otherwise identical to printf( )*/
	fdprintf(fd, "The value of arg is %d", a);

}
