#include <iostream>
#include<string>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
    	
    	freopen("output.txt", "w", stdout);
	#endif


	string str = "PraxLannister";
	cout<<str.length()<<endl;
	str += " 007";
	cout<<str.length()<<endl;
	cout<<str.substr(0,4)<<endl;
	if(str.find("ppp")!=string::npos)
	cout<<"found at : "<<str.find("ppp");
	else
	cout<<"not found";	
	getline(cin,str,'a');
	cout<<endl<<str;

return 0;
}