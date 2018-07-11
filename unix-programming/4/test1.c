#include<stdio.h>
int main()
{
	int x = -7;
	int y;
	y = (x>=0?x+=7:x+17)/2;
	printf("Y is %d\n",y);
	return 0;
}
