#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        int i;
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);

        int max1=a[0],max2=a[0];
        
        for(i=0;i<n;i++)
        {
            
            if(a[i]>max2)
            {
                if(a[i]>max1)
                {
                    max2=max1;
                    max1=a[i];
                }
                if(a[i]<max1)
                {
                    max2=a[i];
                }
            }
            if(a[i]<max2 && max1==max2)
                max2=a[i];
            
        }
        if(max1==max2)
            max2=-1;
        printf("%d\n",max2);
    }
    
    return 0;
}