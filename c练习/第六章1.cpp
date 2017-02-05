#include "stdio.h"
long fibona(int n)
{
	register long f;
	if(n==0||n==1)
		f=1;
	else
		f=fibona(n-1)+fibona(n-2);
	return(f);
}
void main ()
{
long int n;
printf("请输入fibonacci的第n项\n");
scanf("%ld",&n);
printf("fibona=%ld\n",fibona(n));
}