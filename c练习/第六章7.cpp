#include"stdio.h"
#define t 0
#define max3(a,b,c) (a > b ? a : b) > c ? (a > b ? a : b) : c
void main ()
{
	int x,y,z;
	printf("请输入三个整数");
	scanf("%d %d %d",&x,&y,&z);
	printf("最大的为%d\n",max3(x,y,z));
}