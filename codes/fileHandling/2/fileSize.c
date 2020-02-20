#include<stdio.h>
void main()
{

	FILE *fp;
	fp=fopen("file.txt","r");
	if(fp==NULL)
		printf("Error opening a file;\n");
	fseek(fp,0,SEEK_END);
	int len=ftell(fp);
	printf("The Size is %d \n",len );
}