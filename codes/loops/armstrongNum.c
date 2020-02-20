#include<stdio.h>
#include<math.h>
int main(){
		#ifndef ONLINE_JUDGE
	    	
	    	freopen("input.txt", "r", stdin);
	    	
	    	freopen("output.txt", "w", stdout);
		#endif
	int num,count=0,origNum,rem,result=0;
	printf("\nEnter Number to be checked : ");
	scanf("%d",&num);
	origNum=num;
	while(num)
	{
		num/=10;
		count++;
	}
	num=origNum;
	printf("\n%d\n",count);
	while(num)
	{
		rem=num%10;
		rem=pow(rem,count);
		result+=rem;
		num/=10;
	}
	if (result==origNum)
		printf("\nNumber is Armstrong\n");
	else 
		printf("\nNot an armstrong no\n");
	return 0;
}	
