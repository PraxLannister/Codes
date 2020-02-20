/* Program to show
 * 1. Static variable can only be initialized once and other initialiazations will not be entertained (no error ) and variable will not be initialized again
 * 2. main func can call itself */
#include<stdio.h>
int main(){
	static int i =5;
	if (--i){
		main();
		printf("%d",i);
	}
}
