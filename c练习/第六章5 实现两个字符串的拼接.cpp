#include<stdio.h>
int main(void)
{
	char a[500],b[500];
	int n=0,j;
	printf("������һ���ַ�");
	gets(a);
	printf("��������һ���ַ�");
	gets(b);
	while(a[n]!='\0')//�����ַ����ĳ���
	{
		n++;
	}
	for(j=0;b[j]!='\0';n++,j++)
		a[n]=b[j];
	a[n]='\0';
	printf("%s",a);
	getchar();
}