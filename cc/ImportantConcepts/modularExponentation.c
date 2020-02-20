#include<stdio.h>
#define MOD 100007

int modularExponentation(int x,int n)
{
	if(n==0)
		return 1;
	else
	{
		if(n%2==0)
			return modularExponentation((x*x)%MOD,n/2);
		else
			return (x*modularExponentation((x*x)%MOD,(n-1)/2)%MOD);
	}
}
int main()
{
	int x,n;
	while(1)
	{
		scanf("%d %d",&x,&n);
		printf("%d\n",modularExponentation(x,n) );
	}

	return 0;
}