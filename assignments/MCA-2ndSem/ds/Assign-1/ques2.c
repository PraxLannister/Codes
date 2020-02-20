// Author - Prakhar Shekhar Parthasarthi
// Roll No - 2019CA66
// Date Created - Jan 8th 2020
// Description - Ass1-2- program to find the sum of individual digits of a positive integer.

#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter number to find the sum of individual digits : ");
	scanf("%d",&n);
	int sum=0;
	while(n)
	{
		int digit = n%10;
		sum += digit;
		n /= 10;
	}

	printf("\nthe Sum of digits is : %d\n",sum);
	return 0;
}
