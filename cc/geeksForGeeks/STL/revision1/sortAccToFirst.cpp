#include<iostream>
#include<map>

using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
    	
    	freopen("output.txt", "w", stdout);
	#endif
    
    int n1,n2;
    cin>>n1>>n2;
    
    int arr1[n1],arr2[n2];
    
    map<int,int> map;
    
    for(int i=0;i<n1;i++)
    {
    	cin>>arr1[i];
    	map[arr1[i]]++;
    }
     
    for(int i=0;i<n2;i++)
    {
    	cin>>arr2[i];
    }
    for(int i=0;i<n2;i++)
    {
    	int num = arr2[i];
    	auto x = map.find(num);
    	if(x != map.end())
    	{
    		int j = x-> second;
    		for(int i=0;i<j;i++)
    			cout<<x->first<<" ";
    		map.erase(x);
    	}

    }
    for(auto x : map)
    {
    	int j = x.second;
    	for(int i=0;i<j;i++)
    		cout<<x.first<<" ";
    }
    

    
	

return 0;
}