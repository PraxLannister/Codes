#include<stdio.h>
void main(){
	int i,j,numOfRows;
	printf("\nEnter Number of rows : ");
	scanf("%d",&numOfRows);
	for(i=0;i<numOfRows;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
