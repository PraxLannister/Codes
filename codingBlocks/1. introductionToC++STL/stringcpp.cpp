#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
bool isContained(string s1,string s2)
{
	int len1=s1.length();
	int len2=s2.length();
	int len=(len1<len2)?len1:len2;
	//cout<<"ghusing into loop"<<endl;
	for(int i=0;i<len;i++)
	{
		if(s1[i]!=s2[i])
			return false;
	}
	return true;
}
bool comparator(string s1,string s2)
{
	if(isContained(s1,s2))
	{
		return s1.length()>s2.length();
	}
	return s1<s2;

}





int main()
{
	int n;
	cout<<"Enter length : ";
	cin>>n;
	string s[n];
	for(int i=0;i<n;i++)
		cin>>s[i];
	sort(s,s+n,comparator);
	for(int i=0;i<n;i++)
		cout<<s[i]<<" , ";
	
	
	return 0;

}