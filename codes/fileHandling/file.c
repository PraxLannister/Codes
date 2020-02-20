#include<stdio.h>
void main()
{
	char ch;
	FILE *fp;
	fp=fopen("temp.txt","w");
	printf("\nEnters Chracters to file : ");
	while((ch=getchar())!='0');
	{
		putc(ch,fp);
	}
	fclose(fp);
	fp=fopen("temp.txt","r");
	printf("\nPrinting from File\n");
	while((ch=getc(fp))!=EOF)
	{
		printf("%c",ch);
	}
}
