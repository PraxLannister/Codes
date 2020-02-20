#include<stdio.h>
void main()
{
int *p,*q;
int aa,a[10];
p=a;
q=a+1;
printf("\n : %lu : ",(q-p+1));
char arr[10];
char *pch="Prakhar";
char *cp=arr;
while (*cp++=*pch++);
printf("\n:%s",arr);
while(aa=0) printf("qqqqqq");
}
