#include<stdio.h>
void main(){
	int countChar(char *);
	void countChar2();
	char a[30];
	printf("\nentr string :  ");
	scanf("%s",a);
	printf("\nThe no of characters are : %d \n",countChar(a));
	printf("\n new bc\n");
	countChar2();

}
int countChar(char *p)
{
	int nc=0;
	for( ;*p!='\0';nc++ ,p++);
	return nc;
}

void countChar2(){
	int nc =0;
	for( ; getchar()!=EOF;nc++);
	printf("\n The Number of CHaracters are : %d  ",nc);
}
