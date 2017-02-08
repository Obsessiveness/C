#include "stdio.h"
#include "string.h"
#define n 6
void exchange(int a[],int b[])
{
	int t,k;
	for(k=0;k<n;k++)
	{
		t=a[k];
		a[k]=b[k];
		b[k]=t;
	}
	for(t=0;t<n;t++)
		printf("a=%d\t",*(a+t));
	printf("\n");
	for(t=0;t<n;t++)
		printf("b=%d\t",*(b+t));
	printf("\n");

}
int main ()
{
	int a[]={1,2,3,4,5,6},b[]={4,5,6,7,8,9};
	int i;
	for(i=0;i<n;i++)
	printf("a=%d\t",*(a+i));
	printf("\n");
	for(i=0;i<n;i++)
		printf("b=%d\t",*(b+i));
		printf("\n");
	exchange(a,b);
	return 0;
}