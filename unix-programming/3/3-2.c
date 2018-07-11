#include "unistd.h"
#include "fcntl.h"
#include "stdio.h"
/******create  a hole  file*****/
char  buf1[]="abcdefhij";
char  buf2[]="ABCDEFGHJ";
int
main(void)
{
	int  fd;
	if((fd = creat("/home/lin/file.hole",0644)) <0){
		printf("create file  error\n");
	}
	if(write(fd,buf1,10) != 10)
		printf("write  file  error\n");
	if(lseek(fd,16384,SEEK_SET) == -1)
		printf("seek the file error\n");
	if(write(fd,buf2,10) != 10)
		printf("write  file  error\n");

	return 0;
}

