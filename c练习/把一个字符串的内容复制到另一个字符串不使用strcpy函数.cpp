#include"stdio.h"
void copy(char *ps,char *pd)
{
	while((*pd=*ps)!='\0')
	{
		ps++;
		pd++;
	}
}
int main ()
{
	char *pa="china",b[10],*pb;
	pb=b;
	copy(pa,pb);
	printf("string a=%s\nstring b=%s\n",pa,pb);
	return 0;
}