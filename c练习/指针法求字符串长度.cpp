#include"stdio.h"
int main ()
{
	int i=0;
	char a[]="china",*q=a;
	while(*q!='\0')
	{i++;
	q++;}
	printf("����ַ�����%d���ַ�\n",i);
}