#include<apue.h>
int
main(void)
{
	if(lseek(STDIN_FILENO,0,SEEK_END) == -1){
		printf("cannot seek\n");
	}
	else{
		printf("seek  OK\n");
	}
	return  0;
}

