// Author - Prakhar Shekhar Parthasarthi
// Roll No - 2019CA66
// Date Created - Jan 14th 2020
// Description - Assignment-2-(4)
//Problem Statement =======================================================================
/*Write a program in C to count the frequency of each element of an array*/
#include<stdio.h>
int main()
{
	int freqPosetive[1000000]={0};
	int freqNegative[1000000]={0};
	int n;

	printf("\nEnter Size Of array :\n");
	scanf("%d",&n );
	int arr[n];
	getchar();
	printf("\nEnter array of elements(posetive or  negative )\n");
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]>=0)
			freqPosetive[arr[i]]++;
		else
			freqNegative[-1*arr[i]]++;
	}
	printf("\nFrequency of elements in array :\n");
	for(i=0;i<1000000;i++)
	{
		if(freqPosetive[i]>0)
			printf("freq of %d is %d\n",i,freqPosetive[i] );
		if(freqNegative[i]>0)
			printf("freq of %d is %d\n",-i,freqNegative[i] );

	}

}