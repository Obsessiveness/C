#include "stdio.h"
char *del(char *q,char u)
{
	int i=0,j=0;
	while(q[i]!='\0')
	{
		if(q[i]!=u)
		{
			q[j]=q[i];
			j++;
		}
		i++;
	}
	q[j]='\0';
	return(q);
}
int main ()
{
	char a[512],*o,b;
	printf("please input  string \n");
	scanf("%s",a);
	fflush(stdin);
	printf("please input do you want to delete character\n");
	scanf("%c",&b);
	o=del(a,b);
	printf("%s\n",o);
	return 0;
}
