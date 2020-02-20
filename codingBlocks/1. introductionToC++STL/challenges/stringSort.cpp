#include<iostream>
#include<cstring>
#include <algorithm>
using namespace std;

bool isContained(string a ,string b)
{
	int lena=a.length();
	int lenb=b.length();
	int len = (lena<lenb)?lena:lenb;
	for(int i =0;i<len;i++)
	{
		if(a[i] != b[i])
			return false;

	}
	return true;
}

bool compare(string a, string b)
{
	if(isContained(a,b))
		return a.length()>b.length();
	return a<b;

}

int main()
{
#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
    	
    	freopen("output.txt", "w", stdout);
	#endif


	int n;
	cin>>n; 
	string names[n];
	for(int i=0;i<n;i++)
		cin>>names[i];
	sort(names,names+n,compare);
	for(int i=0;i<n;i++)
		cout<<names[i]<<endl;

	

return 0;
}
