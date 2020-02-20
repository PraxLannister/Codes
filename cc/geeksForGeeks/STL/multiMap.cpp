#include <iostream>
#include<map>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
    	
    	freopen("output.txt", "w", stdout);
	#endif


			<int,int> mp;
	mp.insert({10,25});

	mp.insert({10,01});
	mp.insert({10,100});
	mp.insert({10,1000});
	mp.insert({10,25});
	mp.insert({10,25});
	mp.insert({1,200});
	for(auto x: mp)
		cout<<x.first<<" "<<x.second<<endl;





	

return 0;
}