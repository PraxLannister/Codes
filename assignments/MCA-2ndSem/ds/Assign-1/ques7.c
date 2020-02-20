// Author - Prakhar Shekhar Parthasarthi
// Roll No - 2019CA66
// Date Created - Jan 8th 2020
// Description - Ass1-7-to count the lines, words and characters in a given text.
#include <stdio.h>
#include<string.h>
#define MAX 100000
int main()
{
	printf("\nto count the lines, words and characters in a given text.\n");

	char ch;
	char prevChar='\n';
	int charCount=0,wordCount=0,lineCount =0;
	while((ch = getc(stdin))!=EOF){
		//printf("%c",ch );
		if(ch!='\n' && ch!=' ')
			++charCount;
		if((ch == ' ' || ch == '\n') && prevChar!='\n')
				wordCount++;
		if(ch == '\n')
			lineCount++;
		prevChar =ch;
	}
	if(charCount>0){
		wordCount++;
		lineCount++;
	}

	printf("\n\nThe char Count = %d\nThe word Count = %d\nThe line Count = %d\n",charCount,wordCount,lineCount );
	return 0;


}