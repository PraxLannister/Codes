// Author - Prakhar Shekhar Parthasarthi
// Roll No - 2019CA66
// Date Created - Jan 14th 2020
// Description - Assignment-2-(2)
//Problem Statement =======================================================================
// Write a program in C to count a total number of duplicate elements in an array.

#include<stdio.h>
#define MAX 1000000
int main()
{
	int hash[MAX]={0};
	int i,n;
	printf(" Enter Size of an array: \n");

	scanf("%d",&n);
	
	int arr[n];
	printf("Enter Elements :\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	hash[arr[i]]++;
	}
	int dupEle = 0;
	for(i =0 ;i <MAX;i++){
		if(hash[i]>1)
			dupEle += hash[i]-1;
	}
	printf("\nThe Number Of Duplicates are : %d \n",dupEle); 	
	
	

	return 0;
}
