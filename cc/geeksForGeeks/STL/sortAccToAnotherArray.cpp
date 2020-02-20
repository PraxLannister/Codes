#include<iostream>
#include<map>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
    	
    	freopen("output.txt", "w", stdout);
	#endif
    int n1,n2;
    std::map<int, int> map;
    cin>>n1>>n2;
    int arr1[n1],arr2[n2];
    vector<int> ans;
    for(int i=0;i<n1;i++)
    {
    	cin>>arr1[i];
    	map[arr1[i]]++;
    }
    for(int i=0;i<n2;i++)
    {
    	cin>>arr2[i];
    	//map[arr1[i]]++;
    }
   /* for(int x : arr2)
    	cout<<x<<endl;
    for(auto x : map)
    {
    	cout<<"x->first "<<x.first<<" x->second "<<x.second<<endl;
    }*/
    for(int i=0;i<n2;i++)
    {
    	int ele = arr2[i];
    	//cout<<"Finding :"<<ele<<endl;
    	auto it = map.find(arr2[i]);
    	if(it!=map.end()){
    		//cout<<"found : "<<arr2[i]<<endl;
    		//element in arr 2
    		//print that element its frequency time in arr1
    		int frequency = it->second;
    		for(int j=0;j<frequency;j++)
    			ans.push_back(it->first);
    		map.erase(it);
    	}
    }
    for(auto it = map.begin();it!=map.end();it++)
    {
    	int freq = it->second;
    	for(int j=0;j<freq;j++)
    		ans.push_back(it->first);
    }
   // reverse(ans.begin(), ans.end());
    for(int x : ans)
    	cout<<x<<" ";




	
	

return 0;
}