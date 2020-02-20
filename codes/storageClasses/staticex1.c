#include<stdio.h>
int countFuncCalls(void){
	static int i ;
	return ++i;
}
void main(){
	countFuncCalls();
	countFuncCalls();
	countFuncCalls();
	printf("\n: %d : ",countFuncCalls());
}
 

