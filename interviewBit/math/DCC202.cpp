#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

bool myCompre(const pair<string, int> &a, const pair<string, int> &b) 
{ 
    if(a.second!=b.second)
        return (a.second > b.second);
    else return(a.first<b.first);
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
		map<string,int> map;

		vector<string> v;
		v.clear();
		int num;
		string str;
		for(int i=0;i<n;i++)
		{
			cin>>str;
			v.push_back(str);
			map[str]++;
		}
		vector<pair<string, int>> vec;

	  	for (auto it2=map.begin(); it2!=map.end(); it2++) 
	  	{
	    	vec.push_back(make_pair(it2->first, it2->second));
	  	}
	  	sort(vec.begin(), vec.end(), myCompre);
	  	cout<<vec[0].first<<endl;

	}
	

return 0;
}