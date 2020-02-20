#include<stdio.h>
void main(){
	int f=0,s=1,sum,num,t=0;
	printf("\nEnter the no of terms : ");
	scanf("%d",&num);
	printf("\n The Fibonacci series is : %d %d ",f,s);
	while(t<num-2)
	{
		sum=f+s;
		f=s;
		s=sum;
		printf("%d ",sum);
		t++;
	}

}

