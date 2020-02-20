#include<stdio.h>
void main()
{
	char *prax[]={"Prax","Lannister","Praxlannister"};
	printf("\n %s",prax[1]);
	printf("\n %s",*(prax+2));
	printf("\n %c",prax[1][2]);
	printf("\n %s",prax[1]+2);
}
