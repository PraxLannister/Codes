#include <iostream>
#include<cstring>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDG
E    	
    	freopen("input.txt", "r", stdin);
    	
    	freopen("output.txt", "w", stdout);
	#endif


	string str1,str2,res;
	int test;
	cin>>test;
	//res.clear();
	while(test--)
	{
		cin>>str1>>str2;
		for (int i = 0; i < str1.size(); ++i)
		{
			int x = (str1[i]-'0')^(str2[i]-'0');
			res.push_back(x+'0');
		}
		cout<<res;
	}

return 0;
}