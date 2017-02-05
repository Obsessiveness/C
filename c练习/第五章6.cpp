#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[500],b[500];
	int n,j;
	printf("ÇëÊäÈëÒ»´®×Ö·û");
	gets(a);
	printf("ÇëÊäÈëÁíÒ»´®×Ö·û");
	gets(b);
n=strlen(a);
for(j=0;b[j]!='\0';n++,j++)
a[n]=b[j];
	a[n]='\0';
	printf("%s",a);
	getchar();
}