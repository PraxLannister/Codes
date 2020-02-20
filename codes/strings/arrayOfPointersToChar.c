#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int d,m,y;
	char *months1[]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};


	char months2[12][5]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
	months1[0]="January";
//	months2[0]="January";

	scanf("%d/%d/%d",&d,&m,&y);
	printf("%d %s(%s),%d\n",d,months1[d-1],months2[d-1],y );

	return 0;
}