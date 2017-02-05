#include"stdio.h"
#define x 1
#define y 2
#ifdef x
#define yes x*x
#else
#define yes y*y
#endif
void main ()
{
	int a;
	a=yes;
	printf("%d\n",a);
}