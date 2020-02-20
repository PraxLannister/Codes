#include<stdio.h>
int main()
{
	int x,y,num;
	scanf("%d",&x);
	//int arr[x];
	int i;
	int maxa=-1,maxb=-1;
	for(i=0;i<x;i++)
	{
		scanf("%d",&num);
		if(maxa<num)
			maxa=num;
	}
	scanf("%d",&x);
	//int arr[x];
	//int i;
	//int maxa=-1,maxb=-1;
	for(i=0;i<x;i++)
	{
		scanf("%d",&num);
		if(maxb<num)
			maxb=num;
	}
	printf("%d %d\n",maxa,maxb );

	return 0;
}