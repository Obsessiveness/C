#include"stdio.h"
#define max(a,b,c) (a>b?a:b)>c?(a>b?a:b):c
#define mid(d,e,f) (d>e?d:e)>f?(d>e?d:e):f>e?(e>d?e:d):f
#define min(x,y,z) (x>y?x:y)>z?(x>y?x:y):z>y?(y>x?x:y):z
void main ()
{
	int z,t,c;
	printf("请输入三个数");
	scanf("%d %d %d",&z,&t,&c);
	printf("%4d%4d%4d\n",max(z,t,c),mid(z,t,c),min(z,t,c));
}