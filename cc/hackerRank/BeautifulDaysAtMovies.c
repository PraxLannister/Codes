
#include<stdio.h>


long long rever(long long num)
{
    long long revNum=0;
    int digit;
    while(num>0)
    {
        digit=num%10;
        revNum=revNum*10+digit;
        num/=10;
    }
    return revNum;
}

long long difference(long long a,long long b)
{
    if(a>b)
    return a-b;
    else return b-a;
}


int main()
{
    int count=0;
    long long i,j,k,it;
    scanf("%lld %lld %lld",&i,&j,&k);
    
    printf("%lld %lld %lld",i,j,k);
    printf("%lld\n",rever(i) );
    printf("%lld\n",difference(i,j) );


   /* for(it=i;it<=j;it++)
    {
        if(difference(it,rever(it))%k==0)
        count++;
    }
    printf("%d",count);*/



    return 0;
}
    