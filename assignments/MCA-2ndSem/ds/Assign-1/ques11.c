// Author - Prakhar Shekhar Parthasarthi
// Roll No - 2019CA66
// Date Created - Jan 8th 2020
// Description - Ass1-11-implement Call by Value and Call by Reference mechanisms
#include <stdio.h>


void callByValue(int a){
	printf("\n****Inside Call By Value Function****\n");
	printf("\nWe increased the Value of variable by 10\n");
	a = a+10;
	printf("Inside Function Value of variable is : %d\n",a );
	printf("\n****Exiting Call By Value Function****\n");

}

void callByReference(int *a){
	printf("\n****Inside Call By Reference Function****\n");

	printf("\nWe increased the Value of variable by 10\n");
	*a = *a+10;
	printf("Inside Function Value of variable is : %d\n",*a );
	printf("\n****Exiting Call By Reference Function****\n");

}

int main()
{	
	int var_for_callByValue = 100;
	int var_for_callByRef = 100;
	printf("\n===== The Call By Value     Demonstration  =======\n");
	printf("The Value of variable is : %d\n",var_for_callByValue);
	callByValue(var_for_callByValue);
	printf("\nAfter Function Value of variable is : %d \n",var_for_callByValue);

	printf("\n===== The Call By Reference Demonstration  =======\n");
	printf("The Value of variable is : %d\n",var_for_callByRef);
	callByReference(&var_for_callByRef);
	printf("\nAfter Function Value of variable is : %d \n",var_for_callByRef);




	return 0;
}