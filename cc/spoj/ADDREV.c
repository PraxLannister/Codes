#include<stdio.h>
int reverse(int num)
{
	int digit,rev=0;
	while(num>0)
	{
		digit=num%10;
		rev=rev*10+digit;
		num/=10;
		
	}
	return rev;
}
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
	int num1,num2,result;
	scanf("%d %d",&num1,&num2);
	num1=reverse(num1);
	num2=reverse(num2);
	result=num1+num2;
	result=reverse(result);
	printf("%d\n",result);
	
	
	}
	return 0;
}