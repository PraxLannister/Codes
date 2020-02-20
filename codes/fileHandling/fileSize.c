#include<stdio.h>
void main()
{
	FILE *fp;
	int len;
	fp=fopen("file.txt","r");
	if(fp== NULL){
		printf("Error opening file");
	}
	fseek(fp,0,SEEK_END);
	len=ftell(fp);
	fclose(fp);
	printf("\nThe Total Size of file .txt is = %d bytes \n",len);
}
