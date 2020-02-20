#include<stdio.h>
void main(){
	char a[30];
	char b[30];
	void strcpy(char *,char *);
	printf("\n ntr 2 small strngs :");
	scanf("%s %s",a,b);
	strcpy(a,b);
	printf("\nAfter copying the string is : %s ",a);
}
void strcpy(char *p,char *q){
	while(*p++=*q++);
}
