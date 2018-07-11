#include "stdio.h"
#include "errno.h"
#include "unistd.h"
int 
main(int  argc,char *argv[])
{
	fpintf(stderr,"EACCES: %s\n",strerror(EACCES));
	errno = ENOENT;
	perror(argv[0]);
	exit(0);
}
