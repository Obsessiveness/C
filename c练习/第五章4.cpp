#include<stdio.h>
#define n 3
int main(void)
{
	int a[n][n],i,j;
	printf("please input a %d*%d mattrix :\n",n,n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%2d",a[i][j]);
	printf("\n");
	}
	printf("result :  %d\n",a[0][0]+a[n-1][n-1]);
}