// Author - Prakhar Shekhar Parthasarthi
// Roll No - 2019CA66
// Date Created - Jan 8th 2020
// Description - Ass1-1-a-Factorial Using Recursion


#include<stdio.h>
#define ull unsigned long long

//recursive function to calculate factorial
ull fact(int n){
	if(n == 1)
		return 1;
	return n*fact(n-1);
}


int main()
{
	int n;
	printf("\nEnter a Number To find its factorial :");
	scanf("%d",&n);
	printf("factorial is : %llu\n\n",fact(n));
	return 0;
	
}
