#include<stdio.h>
int main(void)
{
	int a[10],i,j,exchange,t;
	printf("please input ten number\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=0;i<10;i++)
	{
		exchange=0;
		for(j=0;j<9-i;j++)
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				exchange=1;

			}
			if(!exchange)
				break;
	}
	printf("最大值和次大值：");
	for(i=9;i>7;i--)
	printf("%2d",a[i]);
	printf("\n");
	return(0);
}