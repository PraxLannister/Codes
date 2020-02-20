#include<stdio.h>
int main(void){
int rem,i=1,j=1,dec=0;
long long int bin,llnSav;
printf("\nEnter number in binary : ");
scanf("%lld",&bin);
llnSav=bin;
while(bin)
{
rem=bin%10;
bin=bin/10;
i=j*rem;
dec+=i;
j*=2;
}
printf("\nThe Converted form is :%d :",dec);
return 0;
}
