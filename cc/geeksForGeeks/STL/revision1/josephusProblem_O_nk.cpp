#include <iostream>
#include<list>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
    	
    	freopen("output.txt", "w", stdout);
	#endif

	list<int> sl;
	int n,k;
	cin>>n>>k;
	for(int i=n-1;i>=0;i--)
		sl.push_front(i);
	auto it = sl.begin();
	while(sl.size()>1)
	{
		for(int i=0;i<k;i++)
		{
			it++;
			if(it==sl.end())
				it=sl.begin();
		}
		it=sl.erase(it);
		if(it==sl.end())
			it=sl.begin();
	}
	cout<<*(sl.begin());

	

return 0;
}
