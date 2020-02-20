#include<stdio.h>
void main(){
	int n,i;
	unsigned long long factorial=1;
	printf("\nEnter an Integer : ");
	scanf("%d",&n);
	if(n<0)
		printf("\nFactorial for negative number does not exist \n");
	else {
		for(i=1;i<=n;i++)
		{
			factorial*=i;
		}
		printf("\nThe Factorial  of %d  is : %llu \n",n,factorial);
	}
}
