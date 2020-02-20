#include<stdio.h>
void main(){
	char operator;
	double a,b;
	
	printf("\nEnter an operand (+,*,-,/,%%)");
	scanf("%c",&operator);
	printf("\nEnter two operands");
	scanf("%lf %lf",&a,&b);
	switch(operator){
		case '+': printf("\nAddition is : %lf \n",a+b); break;
		case '-': printf("\nSubtraction is : %lf \n",a-b); break;
		case '*': printf("\nMultiplication is : %lf \n",a*b); break;
		case '/': printf("\nDivision is : %lf \n",a/b); break;
		case '%': printf("\nModulo is : %d \n",((int)a)%((int)b));break;
		default : printf("\nInvalid operator\n");
	}
}
