#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
    	
    	freopen("output.txt", "w", stdout);
	#endif


	string str;
	getline(cin,str);
	int n= str.length();
	char arr[n+1];
	/*strcpy(arr,str.c_str());
	cout<<arr;
*/	
	string tokens = str;
	char * t = strtok((char *)str.c_str(),"., ");
	cout<<t<<endl;
	while(t)
	{
		t=strtok(NULL," ");
		cout<<t<<endl;
	}

return 0;
}