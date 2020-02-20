#include<iostream>
#include <string>
#include<vector>
using namespace std;

vector<int> tempPatternArray(string pattern)
{
	int size = pattern.size();
	vector<int> v(size,0);
		int j=0,i=1;
	while(i<size)
	{
		if(pattern[i]==pattern[j])
		{
			
			v[i]=j+1;
			i++;
			j++;
		}
		else
		{
			
			if(j!=0)
				j=v[j-1];
			else
				i++;			
		}
	}
/*		for(int i : v)
		cout<<i<<" ";
*/
	return v;
}


int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
    	
    	freopen("output.txt", "w", stdout);
	#endif


	string text,pattern;
	cin>>text>>pattern;
	vector<int> tempPattern = tempPatternArray(pattern);


	///kmp
	int i=0;
	int j=0;
	int sizeText = text.size();
	int sizePattern = pattern.size();
	while(i<sizeText && j<sizePattern)
	{
		if(text[i]==pattern[j])
		{
			i++;
			j++;
		}
		else
		{
			if(j!=0)
				j=tempPattern[j=1];
			else
				i++;
		}
	}
	if(j==sizePattern)
		cout<<"found!";
	else
		cout<<"notFound";




return 0;
}