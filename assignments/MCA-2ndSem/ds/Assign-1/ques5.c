// Author - Prakhar Shekhar Parthasarthi
// Roll No - 2019CA66
// Date Created - Jan 8th 2020
// Description - Ass1-5-program to determine if the given string is a palindrome or not.
#include<stdio.h>

int isPalindrome(char str[],int n)
{
	int i,j;
	int flag = 1;

	for(i=0,j=n-1;i<j;i++,j--)
	{
		if(str[i]!=str[j])
		{
			flag = 0;
			break;
		}
	}
	return flag;
}

int lengthOfString(char str[]){
	int i;
	for(i=0;str[i]!='\0';i++);
	return i;
}
int main()
{

	char str[10000];
	printf("\nEnter a string :\n");
	scanf("%s",str);
	int len = lengthOfString(str);
	printf("\nThe Given string is ");
	if(isPalindrome(str,len))
		printf("a palindrome\n\n");
	else
		printf("not a palindrome\n\n");
	return 0;
}