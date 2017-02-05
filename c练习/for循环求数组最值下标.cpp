#include<stdio.h>
#include<stdlib.h>
#define N 5
int main (void)
{
	float score[N],ave,sum=0.0;
	int no[N],i,max,min;
	max=0;min=0;
	printf("input  no and score of student:\n");
	for(i=0;i<N;i++)
	{
		scanf("%d %f",&no[i],&score[i]);
		sum+=score[i];
	}
	ave=sum/N;
	for (i=0;i<N;i++)
	{
		if(score[i]>score[max])
			max=i;
		if(score[i]<score[min])
			min=i;
	}
	printf("average:%6.2f\n",ave);
	printf("the maximum score:%d %6.2f\n",no[max],score[max]);
	printf("the minimum score:%d %6.2f\n",no[min],score[min]);
	system("pause");
	return(0);
}