#include <iostream>
#include<bitset>
using namespace std;

bitset<30> col,d1,d2;
int ans;

void solveNqueenBitset(int r,int n)
{
	if(r == n){ ans++; return;}
	for(int c =0;c<n;c++)
	{
		if(!col[c] && !d1[r+c] && !d2[r-c+n-1]){
			col[c]=d1[r+c]=d2[r-c+n-1]=1;
			solveNqueenBitset(r+1,n);
			col[c]=d1[r+c]=d2[r-c+n-1]=0;
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
	for(int i=0;i<11;i++)
	{
		ans =0 ;
		cin>>n;
		solveNqueenBitset(0,n);
		cout<<n<<" -> "<< ans<<endl;
	}

return 0;
}