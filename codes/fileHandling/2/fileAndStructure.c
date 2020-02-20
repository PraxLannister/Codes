#include <stdio.h>

struct emp
{
	char name[100];
	int age;
};	
int main()
{
	struct emp e;
	char ch;
	FILE *fWrite;
	fWrite=fopen("empData.txt","a");
	printf("Enter DATA :(name and age): \n");
	while(1)
	{
		scanf("%s %d",e.name,&e.age);
		fprintf(fWrite, "%s\t%d\n",e.name,e.age );
		getchar();
		printf("Data added \nWant to enter  more(y/n) \n============================================\n");
		scanf("%c",&ch);
		if(ch!='y')
			break;
	}
	fclose(fWrite);
	FILE *fRead;
	fRead=fopen("empData.txt","r");
	do
	{
		fscanf(fRead,"%s %d",e.name,&e.age);
		printf("Name is : %s\t\tAnd Age : %d\n",e.name,e.age );

	}while(!feof(fRead));
	return 0;

}