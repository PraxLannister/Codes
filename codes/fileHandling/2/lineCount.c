#include <stdio.h>

int main()
{

	FILE *fp;
	fp=fopen("file2.txt","r");
	char ch;
	int lineCount=0;
	int wordCount=0;
	int charCount=0;
	while((ch=getc(fp))!=EOF)
	{
		if(ch=='\n')
			++lineCount;
		if(ch==' ' || ch== '\n')
			wordCount++;
		charCount++;
	}
	printf("%d %d %d\n",lineCount,wordCount,charCount );
}