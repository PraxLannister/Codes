
#include<stdio.h>

void main()
{
	int base,power;
	int poww(int,int);
	printf("\n ENter number and its power :");
	scanf("%d %d",&base,&power);
	printf("\n The answer is : %d",poww(base,power));
}

int poww(int basef,int powerf){
	int i=1;
	for(int j=powerf;j>0;j--){
	i*=basef;
	}

	return i;
}
