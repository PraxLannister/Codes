#include<iostream>
#include <vector>
#include<unordered_set>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
    	
    	freopen("output.txt", "w", stdout);
	#endif
    unordered_multiset<int> us;
    us.insert(1);
    us.insert(2);
    us.insert(2);
    us.insert(3);
    us.insert(2);
    us.insert(6);
    us.insert(4);
    us.insert(3);
    us.insert(2);
    us.insert(1);
    for(int x : us)
    	cout<<x<<endl;
    auto it = us.equal_range(2);
    for(auto i =it.first;i!=it.second;i++)
    {
    	cout<<"oooo  "<<*i<<" ";
    }




return 0;
}