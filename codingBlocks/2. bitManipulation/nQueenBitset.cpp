#include<iostream>
#include<bitset>
using namespace std;
bitset<30> col , d1, d2;

void solveNqueen(int r,int n,int &ans)
{
	if(r == n) { ans++; return;}
	for(int c = 0;c<n;c++)
	{
		if(!col[c] && !d1[r+c] && !d2[r-c+n-1])
		{
			col[c]=1; d1[r+c]=1;d2[r-c+n-1]=1;
			solveNqueen(r+1,n,ans);
			col[c]=0; d1[r+c]=0;d2[r-c+n-1]=0;
		}

	}
}

int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
    	
    	freopen("output.txt", "w", stdout);
	#endif


	int n;
	cin>>n;
	int ans=0;
	solveNqueen(0,n,ans);
	cout<<ans;
	

return 0;
}