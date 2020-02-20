// Author - Prakhar Shekhar Parthasarthi
// Roll No - 2019CA66
// Date Created - Jan 8th 2020
// Description - Ass1-12-to implement three different ways to swap two variables without using a third
// 						 variable
#include <stdio.h>

//To print Actual values of a and b
void beforeSwapping(int a ,int b){
	printf("\nBefore Swapping \na = %d and b = %d\n",a,b );
}

//Swap Method 1
//using XOR
void swap1(int *a,int *b){
	printf("\n======METHOD 1 ======\n");
	if(*a != *b){
		*a = *a ^ *b;   // a contain a^b
		*b = *a ^ *b;	// b = a^b^b=a
		*a = *a ^ *b;	// a = a^b^a = b
	}
}

//Swap Method 2
//using Addition and Subtraction
void swap2	(int *a,int *b){
	printf("\n======METHOD 2 ======\n");

	if(*a != *b){
		*a = *a + *b;   // a contain a+b
		*b = *a - *b;	// b = a+b-b=a
		*a = *a - *b;	// a = a+b-a=b
	}
}

//Swap Method 3
//using Multiplication and divisio operator
int swap3(int *a,int *b){
	printf("\n======METHOD 3 ======\n");

	if(*a != *b && *b && *a){
		*a = *a * *b;   // a contain a*b
		*b = *a / *b;	// b = a*b/b=a
		*a = *a / *b;	// a = a*b/a = b
		return 1;
	}
	else {
		printf("\nSwappig is not allowed \n");
		return 0;
	}
}



int main(){
	int a;
	int b;
	int store_a;
	int store_b;
	int status=1;

	printf("\nEnter the a and b value : ");
	scanf("%d %d",&store_a,&store_b);

	a = store_a;
	b = store_b;
	beforeSwapping(a,b);
	swap1(&a,&b);
	printf("Now After Swapping\na = %d and b = %d\n",a,b );

	a = store_a;
	b = store_b;
	beforeSwapping(a,b);
	swap2(&a,&b);
	printf("Now After Swapping\na = %d and b = %d\n",a,b );

	a = store_a;
	b = store_b;
	beforeSwapping(a,b);
	status = swap3(&a,&b);
	if(status)
		printf("Now After Swapping\na = %d and b = %d\n",a,b );

}