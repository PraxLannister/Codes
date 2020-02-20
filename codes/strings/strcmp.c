#include<stdio.h>
void main(){
	char a[30],b[30];
	int strcmp(char *,char *);
	printf ("\nEnter two strings : ");
	scanf("%s %s",a,b);
	int check=strcmp(a,b);
	if(check ==0) printf("\n The strings are equal");
	if (check>0) printf("\n1st string is greater");
	if (check<0) printf("2nd string is greater");
}
int strcmp(char *p,char *q){
	for( ;*p == *q;p++,q++)
	{
		if(*p =='\0'){
			return 0;
		}
	}
	
	return *p-*q;
}
