#include <stdlib.h>
#include <stdio.h>
void strcpy(char *str1,char *str2)
{
	while(*str1++=*str2++);	
}
int main()
{
	char *arrp[10],str[20];

	int i;
	for(i=0;i<10;i++)
	{
		scanf("%s",str);
		arrp[i]=(char *)malloc(20);
		strcpy(arrp[i],str);

	}
	for(i=0;i<10;i++)
	{
		printf("--%s--",arrp[i] );
	}

	return 0;
}