#include<bits/stdc++.h>
using namespace std;
int stringToNum(string s)
{
	int num=0;
	int digit,pow=1;
	int n = s.size();
	for(int i=n-1;i>=0;i--)
	{	//cout<<s[i]<<" ";
		num += ((s[i]-'0')*pow);
		cout<<num<<" num ";
		pow *= 10;
	}
	cout<<endl;
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


	string s1="21";
	string s2="2121201";
	cout<<stringToNum(s2);

return 0;
}