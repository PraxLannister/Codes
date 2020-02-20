#include<iostream>
#include <unordered_map>
using namespace std;
void print_unordered_map(unordered_map<int,int> &map)
{
	cout<<map.size()<<endl;
	for(auto x : map)
		cout<<x.first<<" ";
	cout<<"\n================\n";
}
int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
    	
    	freopen("output.txt", "w", stdout);
	#endif


	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	unordered_map<int,int>freq;
	for(int i=0;i<k;i++)
		freq[arr[i]]++;
	//k window ke distict elements aa gaye
	// with there frequency
	print_unordered_map(freq);

	for(int i=k;i<n;i++)
	{
		int ele = arr[i-k];
		if(freq.find(ele)!=freq.end())
			freq[ele]--;
		if(freq[ele]==0)
			freq.erase(ele);
		freq[arr[i]]++;
		print_unordered_map(freq);
	}

	

return 0;
}