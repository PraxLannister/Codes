#include<stdio.h>
void main()
{
	char ch[100];
	int *func();
	int *func2();

	//gets to see its warning
//	gets(ch);
	int *p;
	p=func();
	// rerurn pointer from func
	printf("%d\n",*func());
	printf("%d\n",*p);
	int *ptr2=func2();
	int i;
	for(i=0;i<10;i++)
	printf("-%d-",ptr2		[i]);
//if(i>=n1 || j>=n2)

//scanset
/*	printf("%s\n",ch );
	scanf("%[^\n]%*c",ch);
	printf("%s\n",ch);
	printf("%d",("MCA FIRST">="MCA,FIRST"));
*/}
int  *func()
{
	int *ptr;
	ptr=(int *)malloc(sizeof(int)) ;
	*ptr=5;
	return ptr;
}
int *func2()
{
	int *ptr;
	ptr=(int *) malloc(10*sizeof(int));
	int i;
	for(i=0;i<10;i++)
		ptr[i]=(i*i)%16;
	return ptr;
}