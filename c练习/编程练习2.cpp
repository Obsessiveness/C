#include "stdio.h"
#include "string"
#include "stdlib.h"
int main ()
{
	char st[512],*ps=st;
	int i,n,exchange,t,j;
	printf("������һ���ַ��������򽫰����ַ���ASCII���С��������\n");
	scanf("%s",ps);
	n=strlen(st);
	for(i=0;i<n-1;i++)
	{
		exchange=0;
		for(j=0;j<n-1-i;j++)
			if(ps[j]>ps[j+1])
			{
				t=ps[j];
				ps[j]=ps[j+1];
				ps[j+1]=t;
				exchange=1;
			}
			if(!exchange)
				break;
	}
	ps=st;
	printf("%s\n",ps);
	system("pause");
}