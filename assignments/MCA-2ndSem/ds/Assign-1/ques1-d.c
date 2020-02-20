// Author - Prakhar Shekhar Parthasarthi
// Roll No - 2019CA66
// Date Created - Jan 8th 2020
// Description - Ass1-1-d-Liner Search Using Recursion

#include<stdio.h>

//	if found at last index return index
// 	if not call liner Search for arr with size n-1
// 	if not found return -1
int linearSearch(int arr[],int n ,int key)
{
	if(n>=0){
		if(key == arr[n])
			return n;
		else return linearSearch(arr,n-1,key);
	}
	return -1;
}

int main()
{
	printf("\nLiner Search Using Recursion\n");
	int n,key,i;
	printf("\nEnter Size of Array: ");
	scanf("%d",&n);
	int arr[n];
	printf("\nNow Enter Array :\n");
	for(i = 0;i<n;i++)	
		scanf("%d",&arr[i]);
	printf("\n=================\n");
	printf("\nEnter Key to be searched : ");
	scanf("%d",&key);
	int index = linearSearch(arr,n-1,key);
	if(index == -1)
		printf("Not Found\n");
	else 
		printf("Found at index -> %d \n",index);
	return 0;
}
