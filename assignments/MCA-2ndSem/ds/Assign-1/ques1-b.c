// Author - Prakhar Shekhar Parthasarthi
// Roll No - 2019CA66
// Date Created - Jan 8th 2020
// Description - Ass1-1-b-Recursive function to Print Fibonaccci

#include<stdio.h>

//printing Fibonacci 0 1 1 2 3 5 8.... 1st term 0 2nd term 1 and so on 
int arr[1000];
int fibonacci(int n){
	if(n == 1) return arr[1];
	if(arr[n] != 0)
		return arr[n];
	arr[n] = fibonacci(n-1) + fibonacci(n-2);
	return arr[n];
}

int main()
{
	int i;
	for(i=0;i<1000;i++)
		arr[i]=0;
	arr[1] = 0;
	arr[2] = 1;
	arr[3] = 1;
	int n;
	printf("\nEnter terms till where you wan to find fibonacci : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		printf("%d ",fibonacci(i));
	printf("\n\n");
	return 0;
}
	

