#include<iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

bool isContained(string s1, string s2)
{
	int len1 = s1.size();
	int len2 = s2.size();

	int len = (len1<len2)?len1:len2;
	bool flag = true;
	for(int i=0;i<len;i++)
	{
		if(s1[i]!=s2[i])
		{
			flag = false;
		}
	}
	return flag;
}
int stringToNum(string s)
{
	int num=0;
	int digit,pow=1;
	int n = s.size();
	for(int i=n-1;i>=0;i--)
	{
		num += ((s[i]-'0')*pow);
		pow *= 10;
	}
	return num;
}
	bool myCompare(string s1 , string s2)
	{
		string xy=s1.append(s2);
		string yx =s2.append(s1);
	/*	int int_xy = stringToNum(xy);
		int int_yx = stringToNum(yx);
	return int_xy>int_yx;
	*/	return xy>yx;
	}


string numToString(int num)
{
	string str;
	int digit;
	while(num)
	{
		digit=num%10;
		str.push_back(digit+'0');
		num /= 10;
	}
	reverse(str.begin(), str.end());
	return str;
}

string largestNumber(const vector<int> &A) {
	int size,s=0;
	size=A.size();
	string strArr[size];
	for(int i : A)
	{
		strArr[s++]=to_string(i);
	}

	sort(strArr,strArr+size,myCompare);
	string ans;
	for(string s : strArr)
		{
			//cout<<s<<" ";
			for(int i=0;i<s.size();i++)
				ans.push_back(s[i]);

		}
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



	int test;
	cin>>test;
	while(test--)
	{
		int n;
		cin>>n;
		vector<int> A;
		for(int i=0;i<n;i++)
		{
			int temp;
			cin>>temp;
			A.push_back(temp);
		}
		string ans = largestNumber(A);
		cout<<ans<<endl;
	}


return 0;
}