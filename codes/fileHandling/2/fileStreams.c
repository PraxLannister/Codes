#include <stdio.h>
int main()
{
	FILE *fp;
	char ch;

	fp=fopen("file2.txt","a");
	printf("Enter Data: \n");

	while((ch=getc(stdin))!=EOF)
		putc(ch,fp);
	fclose(fp);
	printf("============================\n");
	fp=fopen("file2.txt","r");
	while((ch=getc(fp))!=EOF)
		putc(ch,stdout);

	return 0;
}