#include"stdio.h"
#include"string"
int main()
{
	int i,j,k;
	char name[512][512],*strp[512],*t;
	printf("please input students number\n");
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		char *q;
		printf("please input Name%d\n",i+1);
		scanf("%s",&name[i]);
		strp[i]=name[i];
	}
	for (i=0;i<k-1;i++)
	{
		for(j=i+1;j<k;j++)
		{
			if(strcmp(strp[i],strp[j])>0)
				{
					t=strp[i];
					strp[i]=strp[j];
					strp[j]=t;
				}
		}
	}
	printf("\nSorted List:\n");
	for(i=0;i<k;i++)
		printf("Name %d:%s\n",i+1,strp[i]);
}