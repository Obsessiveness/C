#include"stdio.h"
char *del(char *q, char u)
{
	char *p1 = q;
	char *p2 = q;
	while (*p2 != '\0')
	{
		*p2 = *p1;
		if (*p1 == u)
		{
			p1++;
		}
		else
		{
			p1++;
			p2++;
		}
		
	}
	return q;
}
int main ()
{
	char a[512],*o,b;
	printf("please input  string \n");
	scanf("%s",a);
	fflush(stdin);//为了确保不影响后面的数据读取（例如在读完一个字符串后紧接着又要读取一个字符，此时应该先执行fflush(stdin);
	printf("please input do you want to delete character\n");
	scanf("%c",&b);
	o=del(a,b);
	printf("%s\n",o);
	return 0;
}