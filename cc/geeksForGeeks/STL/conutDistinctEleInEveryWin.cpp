#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
    	
    	freopen("output.txt", "w", stdout);
	#endif


	int n,k;
	unordered_map<int,int> um;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cin>>k;
	for(int i=0;i<k;i++)	
	{
		um[arr[i]]++;

	}
	cout<<um.size()<<" ";
	for(int i=k;i<n;i++){
		um[arr[i-k]]--;
		if(um[arr[i-k]]==0)
			um.erase(arr[i-k]);
		um[arr[i]]++;
		cout<<um.size()<<" ";
	}
	

return 0;
}