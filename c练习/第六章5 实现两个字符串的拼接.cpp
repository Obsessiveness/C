#include<stdio.h>
int main(void)
{
	char a[500],b[500];
	int n=0,j;
	printf("请输入一串字符");
	gets(a);
	printf("请输入另一串字符");
	gets(b);
	while(a[n]!='\0')//计算字符串的长度
	{
		n++;
	}
	for(j=0;b[j]!='\0';n++,j++)
		a[n]=b[j];
	a[n]='\0';
	printf("%s",a);
	getchar();
}