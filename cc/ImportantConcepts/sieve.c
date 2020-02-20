#include<stdio.h>
void main()
{
    int n,count=0;
    printf("\nEnter Numnber:");
    scanf("%d",&n);
    int isPrime[n+1];// make every number prime
    int i,j;
    for(i=0;i<n;i++) isPrime[i]=1;
    isPrime[0]=0;
    isPrime[1]=0;
    for(i=2;i*i<=n;i++)
    {
        if(isPrime[i]==1) // That means the number (i) is prime
        {
            //printf("%d,",i);
            //count++;
            // we have to make all multiple of its 0(i.e not Prime)
            for(j=i*i;j<=n;j+=i)
            {
                isPrime[j]=0;
            }

        }
    }
    for(i=0;i<n;i++)
    {
    	if(isPrime[i]==1) printf("%d,",i);
    }

}