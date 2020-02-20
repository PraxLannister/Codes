#include<stdio.h>
void main()
{
int *p,*q;
int a[10];
p=a;
q=a+1;
printf("\n : %lu : ",(q-p+1));
}
