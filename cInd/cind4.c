#include<stdio.h>
#include<limits.h>
int main(void)
{
int a=4000000000;
unsigned int b=4000000000;
printf("a=%d, b=%u\n",a,b);
printf("a=%d, b=%u\n",INT_MAX,UINT_MAX);
return 0;
}
