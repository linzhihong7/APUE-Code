#include"stdio.h"
#include"unistd.h"
#include"sys/types.h"
#include"stdlib.h"
int
main(void)
{
	printf("uid  is  %d,  gid  is  %d\n",getuid(),getgid());
	exit(0);
}
