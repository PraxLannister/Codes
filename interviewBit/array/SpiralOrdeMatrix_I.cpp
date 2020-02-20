#include <iostream>
#include <vector>
#define  endl "\n"
using namespace std;


    
    
vector<int> spiralOrder(const vector<vector<int> > &A) 
{
	int startRow=0,startCol=0;
	int endRow = A.size()-1;
	int endCol = A[0].size() -1;

	vector<int > ans;

	while(startRow<=endRow && startCol <=endCol)
	{
		for(int j=startCol;j<=endCol;j++)
			ans.push_back(A[startRow][j]);
		startRow++;

		for(int i=startRow;i<=endRow;i++)
			ans.push_back(A[i][endCol]);
		endCol--;
		if(startRow<=endRow){
		for(int j= endCol;j>=startCol;j--)
			ans.push_back(A[endRow][j]);
		endRow--;
		}	
		if(startCol<=endCol){
		for(int i=endRow;i>=startRow;i--)
			ans.push_back(A[i][startCol]);
		startCol++;
		}
	}

	return ans;
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


	int m,n;
    cin>>n>>m;
   // cout<<"n = "<<n<<"m = "<<m<<endl;

    vector<vector<int> > A(n,vector<int>(m));
    
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<m;j++)
    		cin>>A[i][j];
    }

/*    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<m;j++)
    		cout<<A[i][j]<<" ";
    	cout<<endl;
    }
*/
    vector<int> ans = spiralOrder(A);
    for(int i=0;i<ans.size();i++)
    	cout<<ans[i]<<" ";

	

return 0;
}