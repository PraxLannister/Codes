#include<iostream>
using namespace std;

bool isSafe(int board[][10],int i ,int j,int n)
{
//	cout<<"isSafe called : "<<i<<" "<<j<<endl;
	// check Column
	for(int row = 0; row <i;row++)
	{
		if(board[row][j]==1)
			return false;
	}
	// check Left Column
	int x = i;
	int y = j;
	while(x>=0 && y>=0)
	{
		if(board[x][y]==1)
			return false;
		x--;
		y--;
	}

	x = i;
	y = j;
	while(x>=0 && y<n)
	{
		if(board[x][y]==1)
			return false;
		x--;
		y++;
	}
	return true;
}



bool solveNqueen(int board[][10],int i,int n)
{
//	cout<<"solveNqueen for ith Row : "<<i<<endl;

	if(i==n)
	{
		//Print Board
		for(int row=0;row<n;row++)
		{
			for(int col=0;col<n;col++)
			{
				if(board[row][col]==1)
					cout<<"Q ";
				else
					cout<<"_ ";
			}
			cout<<endl;
		}
		cout<<"\n===================\n";
		//Trick To Print All Configuration :
		//return false;
		return true;
	}
//	cout<<"Not Solved Till yet : "<<i<<endl;

	for(int j=0;j<n;j++)
	{
		if(isSafe(board,i,j,n))
		{
			//Assuming it correct configuration
			//Place the queen
//			cout<<"i ,j that is Safe : "<<i<<" "<<j<<endl;
			board[i][j]=1;
			bool aageyQueenRakhPaye = solveNqueen(board,i+1,n);
			if(aageyQueenRakhPaye == true)
			{
				return true;
			}
			//Our Assumptions Was Worng
			//Backtrack
			board[i][j]=0;
		}
	}
	return false;

}


int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
    	
    	freopen("output.txt", "w", stdout);
	#endif


	int board[10][10]={0};
	int n;
	cin>>n;
//	cout<<"solveNqueen for n : "<<n<<endl;
	solveNqueen(board,0,n);
	

return 0;
}