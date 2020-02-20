#include<stdio.h>
void main(){
	int gcd(int ,int);
	int gcdd;
	int num1,num2;
	printf("\nEnter two numbers to find there gcd : ");
	scanf("%d %d",&num1,&num2);
	if (num1>num2) 
		gcdd =gcd(num1,num2);
	else 
		gcdd=gcd(num2,num1);
	printf("\nThe gcd is : %d.",gcdd);
}
int gcd (int divi ,int devi)
{
	if(divi %devi==0) return devi;
	else return(gcd(devi,divi%devi));
}
