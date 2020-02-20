#include<stdio.h>
int recursiveBinarySearch(int arr[],int lo,int hi,int element)
{
	if(hi<lo)
		return -1;
	int mid=(lo+hi)/2;
	if(arr[mid]==element)
		return mid;
	if(arr[mid]>element)
		return recursiveBinarySearch(arr,lo,mid-1,element);
	if(arr[mid]<element)
		return recursiveBinarySearch(arr,mid+1,hi,element);
}

int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int element;
	scanf("%d",&element);
	printf("%d\n",recursiveBinarySearch(arr,0,19,element) );
}