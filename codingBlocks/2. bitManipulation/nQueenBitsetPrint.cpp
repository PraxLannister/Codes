#include <iostream>
#define SIZE 10
using namespace std;

int col[SIZE],d1[2*SIZE-1],d2[2*SIZE-1];
int ans;

void printBoard(int board[][SIZE],int n)
{	
	cout<<"\n=====================\n";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(board[i][j]==1)
				cout<<"Q ";
			else
				cout<<"_ ";

		}
		cout<<endl;
	}
	cout<<"\n=====================";
}


bool isSafe(int board[][SIZE],int r,int c,int n)
{
	// column checking
	for(int row =0;row<r;row++)
	{
		if(board[row][c]==1)
			return false;
	}

	//left diagonal checking
	int x = r;
	int y = c;
	while(x>=0 && y>=0)
	{
		if(board[x][y]==1)
			return false;
		x--;
		y--;
	}
	x = r;
	y = c;
	// Right Diagonal Checking
	while(x>=0 && y<n)
	{
		if(board[x][y]==1)
			return false;
		x--;
		y++;
	}
	return true;
}

bool isSafe2(int r,int c,int n)
{
	if(col[c]==1)
		return false;
	if(d1[r+c]==1)
		return false;
	if(d2[r-c+n-1]==1)
		return false;
	return true;
}

bool solveNqueen(int board[][SIZE],int i,int n)
	{
	if(i == n)
	{
		printBoard(board,n);
		ans++;
		return false;
	}
	for(int j=0;j<n;j++)
	{
		if(isSafe2(i,j,n))
		{
			//Place Queen
			board[i][j] = 1;
			col[j]=d1[i+j]=d2[i-j+n-1]=1;
			bool ageyQueenRakhPaye = solveNqueen(board,i+1,n);
			if(ageyQueenRakhPaye)
				return true;
			//if no Then Backrack
			board[i][j] = 0;
			col[j]=d1[i+j]=d2[i-j+n-1]=0;
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

   ans =0;
	int board[SIZE][SIZE] ={0};
	
	for(int i=0;i<SIZE;i++)
		col[i]=0;
	for(int i=0;i<2*SIZE-1;i++)
		d1[i]=d2[i]=0;

	int n;
	cin>>n;
	solveNqueen(board,0,n);
	cout<<"\n\nTotal Possible Configuration : "<<ans;

return 0;
}