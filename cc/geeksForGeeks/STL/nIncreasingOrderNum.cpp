#include<iostream>
#include<string>
#include<queue>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
    	
    	freopen("output.txt", "w", stdout);
	#endif


	string str1,str2;
	int n;
	cin>>n;
	queue<string> q;
	q.push("5");
	q.push("6");
	for(int i=0;i<n;i++)
	
{		str1=q.front();
		cout<<str1<<" ;"
		q.pop();
		str2=str1;
		str1+="5";
		str2+="6";

		q.push(str1);
		q.push(str2);
	}

	

return 0;
}