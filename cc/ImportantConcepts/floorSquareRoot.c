#include<stdio.h>

int floorSquareRoot(int num)
{
	if(num==0 || num==1)
		return num;
	int i=1;
	while(i*i<=num)
		i++;
	return i-1;

}


int main()
{
	int num;
	scanf("%d",&num);
	printf("%d\n",floorSquareRoot(num) );


	return 0;
}