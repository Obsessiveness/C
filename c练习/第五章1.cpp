#include<stdio.h>
int main(void)
{
	int a[10],i,j;
	for(i=0;i<10;i++)
		a[i]=i;
	for(i=9;i>=0;i--)
		printf("%2d",a[i]);
	return(0);
}