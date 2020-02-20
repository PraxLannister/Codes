#include<stdio.h>

int main(){
	int num,ans=0;
	int gcd(int,int);
	scanf("%d", &num);  
	// Reading input from STDIN
	for(int i=1;i<num-1;i++){
	printf("gcd %d and %d is %d",num,i,gcd(num,i));
	    if(gcd(num,i)==1)
	    {
	        ans=i;
	    }
	}
	printf("ans is %d.\n", ans);       // Writing output to STDOUT
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


