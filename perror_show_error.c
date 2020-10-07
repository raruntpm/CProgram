/* Showerror.c
 *  Time  : 8:45:50 AM
 *  Created on: Sep 13, 2010
 *  Author: ARUN.R
 * This program makes use of "perror"
 * routine show the error when something goes 
 * wrong . The argument given will be prefixed to
 * it. It is good method of debugging purpose.
 * 
 * OUTPUT:
 *  THE FILE DESCRIPTOR IS 5
	THE NUMBER OF BYTE WRITTEN IS 50
	read:: S_errno_EBADF    //This represent the error
	THE MESSAGE IN THE FILE IS 
	file: S_errno_EBADF
  */


#include <ioLib.h>
#include <stdio.h>
main()
{
	int i,d,g,f,h;
	size_t nbytes=50;
	size_t maxbytes=50;
	char writebuffer[]="embedded_system_technologies";
	char  hello[50];
	i=creat("filename",O_RDWR);
	printf("THE FILE DESCRIPTOR IS %d\n",i);
	d=write(i,writebuffer,nbytes);
	printf("THE NUMBER OF BYTE WRITTEN IS %d\n",d);
	close(i);
	f=open("filename",O_RDWR,0777);
	
	/* we try to read from the wrong file descriptor*/
	if(g=read(h,hello,maxbytes)==ERROR)
		perror("read:");
	
	printf("THE MESSAGE IN THE FILE IS %s\n",hello);
	/* we try to close  the wrong file descriptor*/
	if(close(h)==ERROR)
			{
				perror("file");
			}
}
