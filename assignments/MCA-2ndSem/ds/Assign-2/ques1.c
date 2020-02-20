// Author - Prakhar Shekhar Parthasarthi
// Roll No - 2019CA66
// Date Created - Jan 14th 2020
// Description - Assignment-2-(1)
//Problem Statement =======================================================================
// Consider the elements of the array are given as {2 7 9 5 8 7 4}. Write a program in C to
//find minimum number of swaps required to gather all elements less than or equals to k.

#include<stdio.h>
static int count = 0;
void swap(int *a,int *b){
	
	count++;
	printf("\nSwapping %d and %d \n",*a,*b);
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
	
void swapCount(int arr[],int n,int k){
	int firstLarge =-1;
	int curr = 0;
	while(curr<n){
		if(arr[curr]>k && firstLarge == -1)
			firstLarge = curr;
		else if(arr[curr]<=k && firstLarge!= -1){
			swap(&arr[curr],&arr[firstLarge]);
			firstLarge++;
		}
		curr++;
	}
}

int main()
{

	int n;
	printf("\nEnter Array Size : ");
	scanf("%d",&n);	
	int i,arr[n];
	printf("\nEnter elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	int k;
	printf("\nEnter value of k :");
	scanf("%d",&k);
	swapCount(arr,n,k);
	printf("\nThe No Of Swaps Required are : %d \n\n",count);
	return 0;
}
