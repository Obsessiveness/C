#include"stdio.h"
void main(int argc,char *argv[])
{
	printf("%d\n",argc);
	while(argc>1)
	{++argv;
	printf("%s\t",*argv);
	--argc;
	}
}