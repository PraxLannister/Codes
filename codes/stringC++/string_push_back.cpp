#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
	string str;
	while(1)
	{
		char ch;
		cin>>ch;
		if(ch!='0')
		str.push_back(ch);
		else 
			break;
	}
	cout<<"\n============================================================\n"<<str;
	reverse(str.begin(),str.end());
	cout<<"\n============================================================\n"<<str;
}