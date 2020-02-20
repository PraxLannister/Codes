#include <iostream>
#include<set>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
    	
    	freopen("output.txt", "w", stdout);
	#endif


    	set<int> s;
    	s.insert(2);
    	s.insert(3);
    	s.insert(10);
    	s.insert(100);
    	s.insert(1);
    	s.insert(12);
    	s.insert(100);
    	s.insert(12);
		cout<<s.size()<<endl;
		for(auto i=s.begin();i!=s.end();i++)
			cout<<*i<<" ";
		auto i = s.find(3);
		s.erase(i);
		cout<<s.size()<<endl;
		for(auto i=s.begin();i!=s.end();i++)
			cout<<*i<<" ";

return 0;
}