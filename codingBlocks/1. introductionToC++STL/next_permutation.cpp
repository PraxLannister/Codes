#include <iostream>
#include <cstring>
#include<algorithm>

using namespace std;


bool compare(char a, char b)
{
	return a<b;
}

int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
    	
    	freopen("output.txt", "w", stdout);
	#endif


	string str;
	cin>>str;
	cout<<str<<endl;	
	int len=str.length();
	next_permutation(str.begin(), str.end(),compare);
	cout<<endl<<str<<endl;
	

return 0;
}	
