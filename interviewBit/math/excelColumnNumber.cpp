#include<iostream>
#include<string>
#include<algorithm>
#define endl "\n"
using namespace std;

string convertToColumn(int num)
{
	string ans;
	while(num)
	{
		if(num%26==0)
		{
			num--;
			ans.push_back('Z');
			num /= 26;
		}
		else
		{
			int digit = num%26;
			ans.push_back(digit-1+'A');
			num /= 26;
		}
	}
	reverse(ans.begin(), ans.end());
	return ans;
}	

int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
       	freopen("output.txt", "w", stdout);
       	freopen("error.txt", "w", stderr);

	#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num;
	string str;
	int test;
	cin>>test;
	while(test--)
	{
		cin>>str>>num;
		cout<<"Hello : "<<str;
		str = convertToColumn(num);
		cout<<"-> "<<str<<endl;
	}
	

return 0;
}