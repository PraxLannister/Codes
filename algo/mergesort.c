//Merge Sort
#include<stdio.h>
void merge(int arr[],int start,int mid,int end)
{
	int size=end-start+1;
	int brr[size];
	int i=start,j=mid+1,t=0;
	while(i<=mid && j<=end)
	{
		if(arr[i]<arr[j]) brr[t++]=arr[i++];
		else brr[t++]=arr[j++]; 
	}
	while(i<=mid) brr[t++]=arr[i++];
	while(j<=end) brr[t++]=arr[j++];
	t=0;
	for(i=start;i<=end;i++)
		arr[i]=brr[t++];
}
 void mergeSort(int arr[],int start, int end)
 {
 	if(start>=end) return;
 	else
 	{
 		int mid =(start+end)/2;
 		mergeSort(arr,start,mid);
 		mergeSort(arr,mid+1,end);
 		merge(arr,start,mid,end);
 	}
 }

void main()
{
	int size;
	printf("Enter size : ",size);
	scanf("%d",&size);
	int *arrPointer=(int *) malloc(sizeof(int) * size);
	int i;
	for(i=0;i<size;i++) 
		scanf("%d",&arrPointer[i]);

	for(i=0;i<size;i++) 
		printf("-%d-",arrPointer[i]);
	int start=0,end=size-1;
	mergeSort(arrPointer,start,end);
	for(i=0;i<size;i++) 
		printf("^%d^",arrPointer[i]);
	

}