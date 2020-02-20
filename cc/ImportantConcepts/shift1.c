#include<stdio.h>
void main()
{
	int t,n,i,j;
	scanf("%d",&t);
	for(j=0;j<t;j++)
	{
		scanf("%d",&n);
		int arr[n];
		int count=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
			if(arr[i]==0) count++;
		}
		for(i=0;i<n;i++) arr[i]=0;
		
		for(i=n-count;i<n;i++)
			arr[i]=1;
		
		for(i=0;i<n;i++) 
			printf("%d ",arr[i] );
		
		printf("\n");

		
	}
}