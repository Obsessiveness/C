#include"stdio.h"
void main ()
{
	char a[512],b;
	int i,j;
	printf("������һ���ַ�");
	gets(a);
	printf("������Ҫɾ�����ַ�");
	scanf("%c",&b);
	for(i=j=0;a[i]!='\0';i++)
		if(a[i]!=b)
		{
			a[j]=a[i];
		j++;
		}
		a[j]='\0';
		puts(a);
		getchar();
}