#include <stdio.h>

int GCD(int A,int B)
{
	if(B==0)
		return A;
	else return GCD(B,A%B);
}

int main()
{
	int a, b;
	while(1)
	{
		scanf("%d%d",&a,&b);
		printf("==%d==\n",GCD(a,b) );
	}
	return 0;
}