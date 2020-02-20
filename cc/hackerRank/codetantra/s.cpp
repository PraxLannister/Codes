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
	int row =2*n-1;
	int col =n;
	char arr[row][col];
	int mid = n/2;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			if(i==0 || i==row-1 || i== row/2)
				arr[i][j]='*';
			else if(j==0 && i<=row/2)
				arr[i][j]='*';
			else if(j==col-1 && i>row/2)
				arr[i][j]='*';
			else arr[i][j]=' ';
		}
	}
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<co;lj++)
			cout<<arr[i][j];
		cout<<endl;
	}
	

return 0;
}