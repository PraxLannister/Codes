#include<stdio.h>
void main(void){
void swap(int *, int *);
int a,b;
printf("\nEnter two numbers : ");
scanf("%d %d",&a,&b);
swap(&a,&b);
printf("\nAfter swaping value of num1 and num2 are %d and %d ",a,b);
}

void swap(int *a, int *b)
{
int temp;
temp=*b;
*b=*a;
*a=temp;
}

