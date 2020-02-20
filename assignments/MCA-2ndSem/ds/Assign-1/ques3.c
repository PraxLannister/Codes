// Author - Prakhar Shekhar Parthasarthi
// Roll No - 2019CA66
// Date Created - Jan 8th 2020
// Description - Ass1-3-program to generate all the prime numbers between 1 and n,

#include<stdio.h>
#define SIZE 1000002

int isPrime[SIZE];//Array to tell wheter a number is prime or not

//Funtion to fill isPrime array
//if i is not prime then make isPrime[i]=0
void sieve(){
	int i,j;
	for(int i=2;i*i<SIZE;i++){
		if(isPrime[i]==1){
		//if i is prime number
		//then marks all its multiple non Prime
		for(j=i*i;j<SIZE;j+=i)
			isPrime[j]=0;
		}
	}
}

int main()
{
	int i,n;
	for(i=0;i<SIZE;i++)
		isPrime[i]=1;//Make all numbers Prime (1->Prime 0-> non prime) 
	isPrime[0]=0;//0 is Not prime
	isPrime[1]=0;//1 is Not Prime
	sieve();//to mark all non prime 0
	printf("\nEnter n till where you find all prime nos :\n");
	scanf("%d",&n);
	printf("\n========= List of prime nos ========\n");
	for(i=1;i<=n;i++)
	{
		if(isPrime[i])
			printf("%d ",i );
	}
	printf("\n");
	return 0;
}
