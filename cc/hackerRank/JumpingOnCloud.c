#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n];
    int i;
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int e=100;
    i=0;
    while(1)
    {
        i=(i+k)%n;
        printf("%d = i %d = aari \n",i,arr[i] );
        if(arr[i]==1)
        e=e-3;
        else 
        e=e-1;
        printf("ee %d ee \n",e );
        if(i==0)
        {
        printf("%d",e);
        return 0;
        }  
    }

    return 0;
    }