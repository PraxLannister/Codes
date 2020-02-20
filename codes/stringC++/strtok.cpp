#include<iostream>
#include<cstring>

using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
    	
    	freopen("output.txt", "w", stdout);
	#endif


	// char* strtok(char *str, char *delimiters);
	//om first call it accepts c String 	as argument o f str
	//in subsequent call it eccepts null pointer

    /*Null signifies that we have to work on same string 
    	strtok have static var to store value
    	*/ 

	char str[]="Hi I am Prakhar";
	char *ptr = strtok(str," ");

	cout<<ptr;
	

return 0;
}