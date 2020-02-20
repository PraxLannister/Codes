#include<stdio.h>
#include<stdlib.h>
#define max 100001
int count=0;
void printSieve(long long  l,long long  r,int *prime)
{
	int size=r-l+1;
	int i,j;
	int isPrime[size];
	for(i=0;i<size;i++)
		isPrime[i]=1;
	for(i=0;prime[i]*(long long )prime[i]<=r;i++)
	{
		long long currPrime=prime[i];
		long long base=(l/currPrime)*currPrime;
		if(base<l) base+=currPrime;
		for(long long j=base;j<=r;j+=currPrime)
			isPrime[j-l]=0;
		if(base==currPrime)
			isPrime[base-l]=1;

	}
	for(i=0;i<size;i++)
	{
		if(isPrime[i])
			printf("%lld\n",i+l );
	}

}
int * sieve()
{
	int i,j,isPrime[max];
	for(i=0;i<max;i++)
		isPrime[i]=1;
	isPrime[0]=0;
	isPrime[1]=0;
	for(i=2;i*i<max;i++)
	{
		if(isPrime[i])
		{
			for(j=i*i;j<max;j+=i)
				isPrime[j]=0;
		}

	}
	for(i=0;i<max;i++)
	{
		if(isPrime[i])
			count++;
		//if(i>=100) printf("l %d l\n",count );
	}
	int *prime=(int *) malloc((sizeof(int)*count));
	int t=0;
	prime[t++]=2;
	for(i=3;i<max;i+=2)
	{
		if(isPrime[i])
			prime[t++]=i;
	}
	return prime;

}
int main()
{
	int *prime=sieve();
	int i,l,r;
	scanf("%d %d",&l,&r);
	printSieve(l,r,prime);
	/*for(i=0;i<count;i++)
		printf("%d ",prime[i]);*/
	return 0;
}