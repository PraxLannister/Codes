#include<stdio.h>
void main()
{
	long long int fact(int);
	int num;
	printf("\nEnter The num : ");
	scanf("%d",&num);
	printf("\nThe factorial is : %lld\n",fact(num));
}
long long int fact(int n){
	if (n==1) return 1;
	else return n*fact (n-1);
}
