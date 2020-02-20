#include<iostream>
#include<vector>
using namespace std;
vector<vector<int> > generateMatrix(int n) 
{
	vector<vector<int> > v(n,vector<int>(n,n));
	if(n==0 or n==1)
		return v;

	int startRow ,startCol , endRow,endCol;
	startRow = startCol =0;
	endRow = endCol =n-1;
	int input=1;
	/*while(startRow<=endRow && startCol <=endCol)
	{
		for(int j=startCol;j<=endCol;j++)
			v[startRow][j]=input++;
		startRow++;

		for(int i=startRow;i<=endRow;i++)
			v[i][endCol]=input++;
		endCol--;
		if(startRow<=endRow){
		for(int j= endCol;j>=startCol;j--)
			v[endRow][j]=input++;
		endRow--;
		}	
		if(startCol<=endCol){
		for(int i=endRow;i>=startRow;i--)
			v[i][startCol]=input++;
		startCol++;
		}
	}*/
	while(startRow<=endRow and startCol<=endCol)
	{
		for(int j=startCol;j<=endCol;j++)
			v[startRow][j]=input++;
		startRow++;
		for(int i=startRow;i<=endRow;i++)
			v[i][endCol]=input++;
		endCol--;
		if(startRow<endRow)
		{
			for(int j=endCol;j>=startCol;j--)
				v[endRow][j]=input++;
			endRow--;
		}
		if(endCol>startCol)
		{
			for(int i=endRow;i>=startRow;i--)
				v[i][startCol]=input++;
			startCol++;
		}

	}
	return v;
	

}


int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
       	freopen("output.txt", "w", stdout);
       	freopen("error.txt", "w", stderr);

	#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int n;
	cin>>n;
	vector<vector<int> > v;
	v = generateMatrix(n);
	int row = v.size();
	int col = v[0].size();
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
			cout<<v[i][j]<<" ";
		cout<<endl;
	}

	

return 0;
}