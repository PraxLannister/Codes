#include<stdio.h>
int main()
{
	int num;
	int noOfDigits(int);
	void isArmstrog(int);
	scanf("%d",num);
	isArmstrog(num);


	return 0;
}
int noOfDigits(int num)
{
	int count=0;
	if (num==0) count=1;
	while(num)
		{
			count++;
			num/=10;
		}
		return count;
}
long long power(int num,int p)
{
	
}
void isArmstrog(int num)
{
	int digitCount=noOfDigits(num);


}