#include<stdio.h>
void main(){
	char * ntoc(int );
	int num;
	printf("\nEnter a Number : ");
	scanf("%d",&num);
	printf("\n in string is : %s : ",ntoc(num));
}
char * reverse(char * p)
{
	int len=0;
	char *temp=p;
	for ( ; *p!='\0';p++,len++);
	int i,j;
	for(i=0,j=len-1;i<j;i++,j--){
		int t=temp[i];
		temp[i]=temp[j];
		temp[j]=t;
	}
	return temp;
}
char * ntoc( int num){
	int sign,i=0;
	char s[30];
	if ((sign=num)<0) num=-num;
	do
	{
		s[i++]=(num%10)+'0';
	} while (num/=10);
	printf("\nin func num %s | \n",s);
	if(sign<0) s[i++]='-';
	printf("\nin func num %s | \n",s);
	s[i]='\0';
	printf("\nin func num %s | \n",s);
	return reverse(s);
}



