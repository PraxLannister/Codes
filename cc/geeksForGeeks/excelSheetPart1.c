#include<stdio.h>

char alphabates[26];
void excelColumns(int num)
{
	 if(num)
	 {
	 	int rem=num%26;
	 	if(num==0)
	 		num=num/26-1;
	 	else num=num/26;
	 	excelColumns(num);
	 	printf("%c",alphabates[rem] );
	 }
}
int main()
{
	
	alphabates[0]='Z';	
	int	 i;
	for(i=1;i<26;i++)
    	alphabates[i]=(i-1)+'A';
    for(i=0;i<26;i++)
    	printf("%c ",alphabates[i]);
    int num;
    printf("Enter num: ");
    scanf("%d",&num);
    excelColumns(num);
    return 0;

}		
