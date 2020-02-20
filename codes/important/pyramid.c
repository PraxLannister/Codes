#include <stdio.h>
int main()
{
	int n;
	int i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j<n;j++)
			printf(" ");
		for(j=1;j<2*i;j++)
			printf("x");
		printf("\n");
	}
	for(i=n-1;i>=1;i--)
	{
		for(j=i;j<n;j++)
			printf(" ");
		for(j=1;j<2*i;j++)
			printf("x");
		printf("\n");
	}

	return 0;
}