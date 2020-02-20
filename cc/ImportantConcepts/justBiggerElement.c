#include<stdio.h>

int justBiggerByBinarySearch(int arr[],int lo,int hi,int ele)
{
	int ans=-1;
	while(lo<=hi)
	{
		int mid=lo+(hi-lo)/2;
		
		if(arr[mid]>ele)
		{
			ans=arr[mid];
			hi=mid-1;
		}
		else
			lo=mid+1;
	}
	return ans;
}

int main()
{
	int size;
	printf("Enter Size than enter sorted array : \n");
	scanf("%d",&size);
	int arr[size];
	int i;
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	printf("Enter element :\n");
	scanf("%d",&	i);
	i=justBiggerByBinarySearch(arr,0,size-1,i);
	printf("%d\n",i);


	return 0;
}