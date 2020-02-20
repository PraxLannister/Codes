// Author - Prakhar Shekhar Parthasarthi
// Roll No - 2019CA66
// Date Created - Jan 8th 2020
// Description - Ass1-1-c-GCD Using Recursion


#include<stdio.h>
//	recursive function
//	As By Euclid gcd(a,b)=gcd(b%a,a)
int gcd(int a , int b){
	if(a == 0)
		return b;
	else return gcd(b%a,a);
}
int main()
{
int a,b;
printf("\nEnter Two Numbers to find its GCD:");
scanf("%d%d",&a,&b);
int ans = gcd(a,b);
printf("\nThere GCD is : %d\n\n",ans);
return 0;
}
