#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int isPrime(int n)
{
    printf("Funtion\n");
    int sum=0;
    int arr[1000]={0}; // make every number prime
    arr[0]=1; // 0 is not prime
    arr[1]=1; // 1 is not prime
    for (int i=2;i*i<n;i++)
    {
        if(arr[i]==0) // if number is prime
        {
            printf("I am called to make composite\n");
            // then make all its multiple composite
            for(int j=i*i;j<=n;j=j+i) arr[j]=1;
        }
    }
    for (int i=0;i<n;i++)
    {
        if(arr[i]==0) {
            sum+=i;
            printf("print valuse %d,",i);
        }
 
    }
    return sum;
}


int main() {
    int n,num;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num);
        printf("%d\n",isPrime(num));
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
