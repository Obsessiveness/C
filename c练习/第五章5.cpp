#include<stdio.h>
int main(void)
{
	int a[521],b[521],i,j,t,n;
	printf("请输入成绩的科数\n");
	scanf("%d",&n);
	if(n>=521)
		printf("数据有误请输入小于521的数\n");
	printf("请输入学生的成绩\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)       //排序
	{
		for(j=0;j<n-1-i;j++)
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
	}
	for(i=n-1;i>=0;i--)
		b[i]=i+1;
			printf("成绩:");
	for(i=n-1;i>=0;i--)
		printf("%5d",a[i]);
	printf("\n排行:");
	for(i=0;i<n;i++)
		printf("%5d",b[i]);
	printf("\n");
	return(0);
}