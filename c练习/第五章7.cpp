#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[521];
	int n,i,j=0,b[521];
	printf("请输入一串字符");
	gets(a);
	n=strlen(a);
	for(i=0;i<521;i++)
		b[i]=0;
	for(i=0;i<n;i++)
		if(a[i]>='0'&&a[i]<='9')
		{
			switch(a[i])
		{
			case '0': b[0]+=1;break;
			case '1': b[1]+=1;break;
			case '2': b[2]+=1;break;
			case '3': b[3]+=1;break;
			case '4': b[4]+=1;break;
			case '5': b[5]+=1;break;
			case '6': b[6]+=1;break;
			case '7': b[7]+=1;break;
			case '8': b[8]+=1;break;
			case '9': b[9]+=1;break;
defult: printf("\n");
		}
		}
		for(i=0;i<10;i++,j++)
		{
			printf("%d出现了%d次\n",i,b[j]);
		}
		getchar();
}