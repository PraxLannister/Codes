#include<stdio.h>
intmain()
{
    long long int t;
    scanf("%lld",&t);
    while(t--)
    {
        long long int cost=0;
        long long int b,w,bc,wc,z;
        scanf("%lld %lld %lld %lld %lld",&b,&w,&bc,&wc,&z);
        //printf("%lld-%lld-%lld-%lld-%lld\n",b,w,bc,wc,z );
        if(bc+z<wc)
        {
            cost=(b+w)*bc+(w*z);
        }
        else if(wc+z<bc)
        {
            cost=(b+w)*wc+(b*z);
        }
        else
        {
            cost=bc*b+wc*w;
        }
        printf("%lld\n",cost);
    }

    return 0;
}
