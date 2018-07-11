#include"apue.h"
#include <fcntl.h>

void 
set_fl(int fd,int flags)/*flags are file  status to turn on */
{
	int val;

	if((val = fcntl(fd,F_GETFL,0)) < 0)
		err_sys("fcntl F_GETFL error");

	var |= flags;
	
	if(fcntl(fd,F_SETFL,var) < 0)
		err_sys("fcntl F_SETFL error");
}
