#include <stdio.h>

int main(void) {
	// your code here
	while(1)
	{
		int n ;
		scanf("%d",&n);
		if(n==-1) break;
		else 
		{
			int arr[n];
			int i;
			int ans=0,move=0;
			for(i=0;i<n;i++)
			{
				scanf("%d",&arr[i]);
				ans+=arr[i];
			}
			if(ans%n==0)
			{
				int diff=ans/n;
				for(i=0;i<n;i++)
				{
					if(diff>arr[i])
					{
						move+=diff-arr[i];
					}
				}
				printf("%d\n",move);
				
			}
			else printf("-1\n");
		}
		
	}

	return 0;
}