// Author - Prakhar Shekhar Parthasarthi
// Roll No - 2019CA66
// Date Created - Jan 14th 2020
// Description - Assignment-2-(3)
//Problem Statement =======================================================================
/*Write a program in C to merge two arrays of same size sorted in descending order*/
#include<stdio.h>
#include<stdlib.h>
int *merge(int arr1[],int n1,int arr2[],int n2)
{
	int size = n1+n2;
	int *arr = (int *)malloc(size*sizeof(int));
	int i=0,j=0,t=0;
	while(i<n1 && j<n2)
	{
		if(arr1[i]>arr2[j])
			arr[t++]=arr1[i++];
		else
			arr[t++]=arr2[j++];
	}
	while(i<n1)
		arr[t++]=arr1[i++];
	while(j<n2)
		arr[t++]=arr2[j++];
	return arr;
}
int main()
{
/*	#ifndef ONLINE_JUDGE
	    	
	    	freopen("input.txt", "r", stdin);
	    	
	    	freopen("output.txt", "w", stdout);
		#endif*/
	printf("Enter size of two arrays \n");
	int n1,n2,i;
	scanf("%d%d",&n1,&n2);
	int arr1[n1], arr2[n2];
	printf("\nEnter 1st array in descending order\n");
	for(i=0;i<n1;i++)
		scanf("%d",&arr1[i]);
	printf("\nEnter 2nd array in descending order\n");
	for(i=0;i<n2;i++)
		scanf("%d",&arr2[i]);
	printf("\nThe merged array is :\n");
	int *arr = merge(arr1,n1,arr2,n2);
		for(i=0;i<(n1+n2);i++)
		printf("%d ",arr[i] );
	return 0;

}