#include <iostream>
#include <string>
#include <algorithm>
#define endl "\n"

using namespace std;
int titleToNum(string str)
{
		reverse(str.begin(), str.end());
	int num = 0;
	int power = 1;
	int digit;
	for(char ch : str)
	{
		digit = ch - 'A'+1;
		num += digit*power;
		power *= 26;
	}
	return num;
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
	int temp;
	cin>>temp;
	while(temp--)
	{
		cin>>str>>num;
		int ans = titleToNum(str);
		cout<<num<<": "<<str<<" -> "<<ans<<endl;
	}

return 0;
}
