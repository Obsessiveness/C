#include<stdio.h>
#include<stdlib.h>
int main (void)
{
	int a,b,c,t;
	printf("请输入三个整数\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a<b)
	{
		t=a;
		a=b;
		b=t;
	}
	if(a<c)
	{
		t=a;
		a=c;
		c=t;
	}
	if(c>b)
	{ 
		t=c;
		c=b;
		b=t;
	}
	printf("%d %d %d\n",a,b,c);
	system("pause");
	return 0;
}