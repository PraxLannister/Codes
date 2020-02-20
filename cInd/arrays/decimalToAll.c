#include<stdio.h>
#include<stdlib.h>
#define length 20
void reverse(char *arr)
{
	int i,j,size=0;
	while(arr[size]!='\0')
		size++;
	for(j=size-1,i=0;i<j;i++,j--)
	{
		char temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}


}


char  *baseConversion(int decimal , int base)
{
	char *convert=(char *)malloc(length*(sizeof(char)));
	int i=0,j;
	while(decimal>0)
	{
		int digit=decimal%base;
		if(digit>9 && digit <=length)
		{
			convert[i++]=digit-10+'A';

		}
		else
			convert[i++]=digit+'0';
		decimal/=base;

	}
	convert[i]='\0';
	reverse(convert);
	return convert;


}
int  main()
{
	int decimal,base;
	printf("Enter Number and base : ");
	scanf("%d %d",&decimal,&base);
	char *convert=baseConversion(decimal,base);
	int i=0;
	while(convert[i]!='\0')
		printf("%c",convert[i++] );


	return 0;

}