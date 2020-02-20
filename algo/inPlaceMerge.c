#include<stdio.h>
void inPlaceMerge(int arr[],int start1,int mid,int end)
{
	int start2=mid+1;
	while(start1<=mid && start2<=end)
	{
		// if 1st element is smaller than 2nd than increase 1st pointer 
		if(arr[start1]<= arr[start2])
			start1++;
		else
		{
			//int savedIndex=start1;
			int savedValue=arr[start2];
			int index=start2;
			while(index>start1)
			{
				arr[index]=arr[index-1];
				index--;
			}
			arr[index]=savedValue;
			start1++;
			mid++;
			start2++;
		}
	}
}
void mergeSort(int arr[],int start,int end)
{
	int mid;
	if(start<end)
	{
		mid=(start+end)/2;
		mergeSort(arr,start,mid);
		mergeSort(arr,mid+1,end);
		inPlaceMerge(arr,start,mid,end);

	}
}
int main()
{
	int size;
	scanf("%d",&size);
	int i;
	int arr[size];
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	mergeSort(arr,0,size-1);
	for(i=0;i<size;i++)
		printf("-%d-",arr[i]);


	return 0;
}