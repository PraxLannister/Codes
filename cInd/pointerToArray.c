#include<stdio.h>
int main()
{
	int (*b)[5],arr[5]={1,2,3,4,5};
	b=&arr;
	int i;
	/*for(i=0;i<5;i++)
		printf("-%d- \n",b[i] );*/
	for(i=0;i<5;i++)
		printf("=%d= \n",(*b)[i] );
	for(i=0;i<5;i++)
		printf("%d\n",(*b)[i] );
	return 0;
}