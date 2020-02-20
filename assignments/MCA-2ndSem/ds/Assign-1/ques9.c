// Author - Prakhar Shekhar Parthasarthi
// Roll No - 2019CA66
// Date Created - Jan 8th 2020
// Description - Ass1-9-program to demonstrate the concept of one-dimensional array finding the sum of
//						array elements.

#include <stdio.h>

int arraySum(int *a,int n){
	int sum = 0;
	int i;
	for(i=0;i<n;i++)
		sum += a[i];
	return sum;
}

int main()
{
	int n;
	printf("\nEnter Size Of array : ");
	scanf("%d",&n);
	int arr[n];
	printf("\nNow Enter array elements : \n");
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	int sum = arraySum(arr,n);
	printf("\nThe sum of enterd array is : %d\n",sum );
}