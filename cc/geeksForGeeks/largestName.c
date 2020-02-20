#include <stdio.h>
int my_strlen(char str[])
{
    int i=0;
    while(str[i]) i++;
    return i;
}
int main() {
	//codeGeeksforGeeks
	int count=0;
	int test;
	char *cptr=NULL;
	scanf("%d",&test);
	while(test--)
	{
	    int size;
	    scanf("%d",&size);
	    char str[size][1001];
	    int i;
	    for(i=0;i<size;i++)
	    {
	        scanf("%s",str[i]);
	        int temp=my_strlen(str[i]);
	        if(temp>count)
	        {
	            count=temp;
	            cptr=str[i];
	        }
	    }
	    printf("%s",cptr);
	}
	
	return 0;
}