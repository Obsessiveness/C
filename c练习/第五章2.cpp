#include<stdio.h>
int main(void)
{
	int a[5],i,min=0;
	printf("please input five number\n");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	for(i=0;i<5;i++)
		if(a[i]<a[min])
			min=i;
	i=a[min];
	a[min]=a[0];
	a[0]=i;
			for(i=0;i<5;i++)
			printf("%2d",a[i]);
		return(0);
}