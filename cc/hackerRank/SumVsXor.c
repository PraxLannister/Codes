#include<stdio.h>
#include<math.h>
#define ull unsigned long long
int main()
{
 ull num;
 scanf("%llu",&num);
 int count=0;
 if(num == 0)
 count=1;
 else
 {
     int n;
     while(num)
     {
        n=num%2;
        if(!n)
        count++;;
        num/=2;
     }
     
 }
 printf("%d",pow(2,count));
}   
