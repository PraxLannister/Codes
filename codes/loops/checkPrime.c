#include<stdio.h>
void main(){
	int num,flag=0,i;
	printf("\nEnter a number to check whether it is prime or not : ");
	scanf("%d",&num);
	for(i=2;i<=num/2;i++)
	{
		if (num%i==0)
		{
			flag=1;
			break;
		}
	}
	if (flag==0) printf("\nNumber is Prime number \n");
	else printf("\n Number is not prime \n");
}
