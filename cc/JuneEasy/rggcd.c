#include<stdio.h>
int main(void)
{
int n1,n2;
int gcd(int,int);
printf("Enter two numbers :");
scanf("%d %d",&n1,&n2);
printf("The gcd of %d and %d is : %d",n1,n2,gcd(n1,n2));
return 0;
}
int gcd(int a,int b)
{
int q,r;
while(a)
{
r=b%a;
b=a;
a=r;
}
return b;
}
