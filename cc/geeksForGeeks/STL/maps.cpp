#include<iostream>
#include <map>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
    	
    	freopen("output.txt", "w", stdout);
	#endif


	std::map<int, int> m;

/*	m.insert({1,100});
	m[2]=200;
	m[3]=300;
	m.insert({1,1000});
	for(auto &x : m)
		cout<<"map[ "<<x.first<<" ] = "<<x.second<<endl;*/
	
	m.insert({2,200});
	cout<<m.size()<<" "<<m[20]<<" "<<m.size();
	m[20]= 300;
	cout<<m.size()<<" "<<m[20]<<" "<<m.size();
		
return 0;
}