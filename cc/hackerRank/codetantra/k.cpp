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
	char arr[n][n];
	int mid = n/2;
	for(int i=0;i<n;i++)
	{

		for(int j=0;j<n;j++)
		{
			if(j == 0)
				arr[i][j]='*';
			else if(i+j == mid)
				arr[i][j]='*';
			else if(i-j==mid)
				arr[i][j]='*';
			else
				arr[i][j]=' ';
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cout<<arr[i][j];
		cout<<endl;
	}
	

return 0;
}