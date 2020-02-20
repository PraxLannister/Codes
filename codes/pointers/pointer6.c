#include<stdio.h>
void main(){
	char *name[]={"Prax","Lannister","PraxLannister"};
	printf("\n%s",name[0]);
	printf("\n%s",(*(name+1)));
	printf("\n%s",*name+1);
	printf("\n%s",*(name+2)+4);
	printf("\n%c",*(*(name+2)+4));
}
