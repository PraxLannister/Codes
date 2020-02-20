#include<stdio.h>
void main(){
	char b[30];
	char * strrev(char *);
	printf("\nEnter a String : ");
	scanf("%s",b);
	printf("Rev String is : %s ",strrev(b));
}
char * strrev(char * p){
	int len=0;
	char *ret=p;
	printf("\n%s    %s\n",ret,p);
	for( ;*p!='\0';len++,p++);
	int i,j;
	printf("\n%d\n",len);
	char c;
	for(i=0,j=len-1;i<j;i++,j--)
	{
		 c=ret[i];
		ret[i]=ret[j];
		ret[j]=c;
	}
	printf("\n%s	%s\n",ret,p);
	return ret;
}
