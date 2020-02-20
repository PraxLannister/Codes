#include <iostream>
#include <stack>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
    	
    	freopen("output.txt", "w", stdout);
	#endif


	int n;
	int num,next;
	stack<int> s;
	cin>>n;
	cin>>num;
	s.push(num);
	for(int i=1;i<n;i++){
		cin>>next;
		while(!s.empty() && next>s.top()){
			cout<<s.top()<<" "<<next<<endl;
			s.pop();
		}
	s.push(next);		
	}
	while(!s.empty())
	{
		cout<<s.top()<<" "<<-1<<endl;
		s.pop();
	}
	


return 0;
}