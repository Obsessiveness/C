#include<stdio.h>
int main(void)
{
	int a[521],b[521],i,j,t,n;
	printf("������ɼ��Ŀ���\n");
	scanf("%d",&n);
	if(n>=521)
		printf("��������������С��521����\n");
	printf("������ѧ���ĳɼ�\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)       //����
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
			printf("�ɼ�:");
	for(i=n-1;i>=0;i--)
		printf("%5d",a[i]);
	printf("\n����:");
	for(i=0;i<n;i++)
		printf("%5d",b[i]);
	printf("\n");
	return(0);
}