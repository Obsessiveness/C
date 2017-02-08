#include"stdio.h"
int main ()
{
	int i=0;
	char a[]="china",*q=a;
	while(*q!='\0')
	{i++;
	q++;}
	printf("这个字符串有%d个字符\n",i);
}