#include <stdio.h>
int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	int temp;
	for(temp=0;temp<t;temp++)
	{
	    int n;
	    scanf("%d",&n);
	    int arr[n];
	    int brr[n];
	    int i,j;
	    
	    for(i=0;i<n;i++) brr[i]=0;
	    
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&arr[i]);
	    }
	    for(i=0;i<n;i++)
	    {
	        int count=0;
	        for(j=0;j<n;j++)
	        {
	            if(arr[j]>arr[i]) count++;
	        }
	        brr[i]=count;
	    }
	    for(i=0;i<n;i++) 
	    printf("%d ",brr[i]);
	    printf("\n");
	}
	return 0;
}

