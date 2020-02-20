#include<stdio.h>
void main()
{
	int funct(int *);
	int a[10];
	printf("\nEnter elements of an array\n");
	for(int i=0;i<10;i++)	scanf("%d",&a[i]);
	printf("\n\nthe sum of all elements is %d : ",funct(a));
}
int funct(int * b)
{
	int sum=0;
	b++;
	for(int i=0;i<9;i++)
	{
	//	printf("/n%u/n;;;;",b+i);
		sum=sum+(*(b+i));
	}
	return sum;
}

