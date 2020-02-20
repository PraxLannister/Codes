#include<stdio.h>
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","r",stdout);
    #endif
    int n,m,start,end,mid;
    scanf("%d",&n);
    int a[n],i,s,t,max=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>max)
        {
            max=a[i];
            s=i;
        }
    }
    scanf("%d",&m);
    if(max==m)
    {
        printf("%d",s);
    }
    else
    {
        t=-1;
        start=0;
        end=s-1;
        while(end>=start)
        {
            mid=(start+end)/2;
            if (a[mid] == m) 
            t=mid; 
            if (a[mid] < m) 
            {
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }  
        }
        if(t==-1)
        {
            start=s;
            end=n-1;
            while(end>=start)
            {
                mid=(start+end)/2;
                if (a[mid] == m) 
                t=mid; 
                if (a[mid] < m) 
                {
                    end=mid-1;
                }
                else
                {
                    start=mid+1;
                }  
            }
        }
        printf("%d",t);
    }
    return 0;
}
