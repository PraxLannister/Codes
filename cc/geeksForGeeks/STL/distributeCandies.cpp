#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
    	
    	freopen("output.txt", "w", stdout);
	#endif


	int n;
	unordered_set<int> s;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		s.insert(arr[i]);

	}
	int type = s.size();
	if(type>n/2)
		type = n/2;
	cout<<type;

	

return 0;
}