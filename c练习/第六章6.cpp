#include "stdio.h"
#include "string.h"
int main(void)
{
	char a[512],b;
	int n,i,j;
	printf("������һ���ַ�\n");
		gets(a);
		printf("������Ҫɾ�����ַ�\n");
		scanf("%c",&b);
		n=strlen(a);
		for(i=j=0;i<n;i++)
			if(a[i]!=b)
			{
				a[j]=a[i];
				j++;
			}
			a[j]='\0';
			printf("%s\n",a);
			getchar();
}
