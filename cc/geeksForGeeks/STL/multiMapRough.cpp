#include <iostream>
#include<string>
#include<algorithm>
#include <map>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
    	
    	freopen("output.txt", "w", stdout);
	#endif


    multimap<int,string> mmap;
	int n;
	cin>>n;
	while(n--)
	{
		int temp;
		string str;
		cin>>temp;
		getline(cin,str);
		mmap.insert(pair<int,string>(temp,str+" : "));
	}
	//mmap.erase(1);
	auto it = mmap.equal_range(1);
	// it is now pair of iterators
	auto itl = it.first;
	auto itu =  it.second;
	cout<<"itu "<<itu->first<<" "<<itu->second<<endl;
	cout<<"itl "<<itl->first<<" "<<itl->second<<endl;
	for(auto x : mmap)
	{
		cout<<x.first<<" -> "<<x.second<<endl;  
	}
	

return 0;
}