#include<stdio.h>
#include<string.h>
void main(){
	
	char a[50]="Prax";
	char b[50]="Lannisiter";
	printf("\nFull Name is : %s \n",strcat(a,b));
//	char *ptr=strcat(a,b);
//	printf("\n %s \n",ptr);
	printf("\n%s||(a,b)||%s",a,b);
	printf("\n strcmp : %d ",strcmp(a,b)); 
}

