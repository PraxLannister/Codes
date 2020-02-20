#include<stdio.h>
int *merge(int *arr,int start,int mid,int end)
{
	int *temp=(int *)malloc(sizeof(int)*(end - start +1));
	int i=start,j=mid+1,t=0;
	while(i<=mid && j<=end)
	{
		if(arr[i]<arr[j]) temp[t++]=arr[i++];
		else temp[t++]=arr[j++];
	}
	while(i<=mid)
		temp[t++]=arr[i++];
	while(j<=end)
		temp[t++]=arr[j++];
	return temp;
}
int main()
{
	int ar[]={10,22,33,44,55,12,24,26,36,48};
	int size=sizeof(ar)/sizeof(int);
	size=size-1;
	int mid =size/2;

	int *arr=merge(ar,0,mid,size);
	for(int i=0;i<=size;i++)
		printf("--%d--",arr[i]);








	return 0;
}