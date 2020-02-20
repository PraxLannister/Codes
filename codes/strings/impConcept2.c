#include<stdio.h>
char *getString(){
	char str[]="Print it";
	return str;
}
void main(){
	printf(":\n%s\n:",getString());
}
