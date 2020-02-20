/*prog to read 15 numbers and print sum of only posetive numbers*/
#include<stdio.h>
void main(){
int n,i,sum=0;
for(i=0;i<15;i++)
{
printf("enter %d integer",i+1);
scanf("%d",&n);
if(n<=0) continue;
sum+=n;
}
printf("\n\nThe Sum of Posetive numbers is : %d\n",sum);
return;
}
