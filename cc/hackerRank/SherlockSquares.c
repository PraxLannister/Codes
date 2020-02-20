#include<stdio.h>

long long sqrtFloor(long long num)
{
    if(num==0 || num==1)
        return num;
    long long arr[num];
    long long i;
    for(i=0;i<num;i++)
        arr[i]=i;
    long long lo=0;
    long long hi=num-1;
    long long ans=0;
    long long  mid;
    while(lo<=hi)
    {
        mid=lo+(hi-lo)/2;
        if((arr[mid]*arr[mid])<=num)
        {
            ans=arr[mid];
            lo=mid+1;
        }
        else
            hi=mid-1;
    }
    return ans;

}

long long isPerfectSquare(long long i,long long num)
{
    if(i*i==num)
        return 1;
    else return 0;
}
int main()
{
    long long q;
    scanf("%lld",&q);
    while(q--)
    {
        long long a,b;
        scanf("%lld %lld",&a,&b);
        long long sqrta=sqrtFloor(a);
        long long sqrtb=sqrtFloor(b);
        printf("%lld\n",sqrta );
        printf("%lld\n",sqrtb );
        if(isPerfectSquare(sqrta,a))
        {
            printf("%lld\n",sqrtb-sqrta+1 );
        }    
        else
        {
            printf("%lld\n",sqrtb-sqrta );
        }

    }

    return 0;
}
    