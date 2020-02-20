#include <stdio.h>

int isPrime(int num)
{
    int i;
    int flag=1;
    if(num==1) flag=(-1);
    for (i=2;i<num;i++)
    {
        if(num%i==0)
        {
            flag=(-1);
        }
    }
    return flag;
}
int perfectPrime(int num)
{
    int i,digit;
    int flag=1;
    while(num)
    {
        digit=num%10;
        if(isPrime(digit)==(-1))
        {
            flag=(-1);
        }
        num/=10;
    }
    return flag;
}
int main() {
    char ch;
    scanf("%c",&ch);
    int num=ch;
    int i;
    if((num>=65 && num<=90) ||(num>=97 && num<=122)){
        printf("Hello\n");
        for(i=2;i<=num;i++){
            if(perfectPrime(i)!=(-1)) 
            {
                printf("%d ",i);
            }
        }
    }
    else printf("Non-alphabetic");
       
    return 0;
}