#include"stdlib.h"
#include"stdio.h"
int
main(void)
{
	int  c;
	while((c = getc(stdin)) !=  EOF)
		if(putc(c,stdout) == EOF)
			printf("output error!\n");

	if(ferror(stdin))
		printf("input error");

	exit(0);
}
