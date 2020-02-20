#include <iostream>
using namespace std;
int main()
{
		#ifndef ONLINE_JUDGE
	    	
	    	freopen("input.txt", "r", stdin);
	    	
	    	freopen("output.txt", "w", stdout);
		#endif
	int n;
	cin>>n;
	char arrN[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(j==0 || j== n-1)
				cout<<"*";
			else if(i==j)
				cout<<'*';
			else 
				cout<<' ';
			
		}
		cout<<endl;
	}
/*	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cout<<arrN[i][j];
		cout<<endl;
	}*/
}