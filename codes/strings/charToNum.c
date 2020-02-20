#include<stdio.h>
void main(){
	char a[30];
	int charToNum(char *);
	printf("\nEnter string of numbers/digits only : ");
	scanf("%s",a);
	int num=charToNum(a);
	printf("\n The extracted number is : %d \n",num);
}
int charToNum(char *s){
int i,num=0;
for(i=0;s[i]>='0' && s[i]<='9';i++){
	num=(num*10)+(s[i]-'0');
	}
	return num;
}

