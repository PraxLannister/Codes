#include<stdio.h>
void main()
{
	char ch='y';
	char extra;
	int data,sum=0;
	while(ch=='y')
	{
		printf("\nenter num : ");;
		scanf("%d",&data);
		sum+=data;
		printf("\nDo you want to enter more : ");
		scanf("%c",&extra);
		scanf("%c",&ch);
		printf("**%c**",ch);
	}
	printf("\nThe sum is : %d ",sum);
}
