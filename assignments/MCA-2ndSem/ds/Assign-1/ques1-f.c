// Author - Prakhar Shekhar Parthasarthi
// Roll No - 2019CA66
// Date Created - Jan 8th 2020
// Description - Ass1-1-e-Tower Of Hanoi Using Recursion
#include<stdio.h>

//	Printing Steps For Solving Tower Of Hanoi	
void TOH(int n , char x ,char y,char z){
	static int step =1;
	if(n<=0){
		printf("Not Possible");
		return ;
	}		
	if(n == 1){
		printf("Step %d -> :Move Top Disk form { %c } to { %c } \n",step++,x,y);
		return ;	
	}
	TOH(n-1,x,z,y);
	printf("Step %d -> :Move Top Disk form { %c } to { %c } \n",step++,x,y);
	TOH(n-1,z,y,x);
}
int main()
{
	int n;
	printf("\nEnter num of disks: ");
	scanf("%d",&n);
	printf("\n==================================\n");
	TOH(n,'x','y','z');
	printf("\n\n");
	return 0;
}
	
