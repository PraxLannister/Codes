#include<iostream>
#include<vector>
#include<algorithm>
#include <numeric>

using namespace std;

int main()
{
	
	int m,n,k;
	int test;
	cout<<"\nENtr test Cases :\n";
	cin>>test;
	while(test--)
	{
		cout<<"\nM N K :\n";
		cin>>m>>n>>k;
		std::vector<int> v(m,0);
		int mat[m][n];
		cout<<"\nENtr MAtrix :\n";
		for(int r=0;r<m;r++)
		{
			for(int c=0;c<n;c++)
			{
				cout<<"\nntr row : "<<r<<"\n";
				cin>>mat[r][c];

				if(mat[r][c]=='*')
					v[r]++;
			}
		}

		sort(v.begin(), v.end(),less<int>());
		int index=0;
		while(k>0 && index<m && n-v[index] > v[index])
		{
			v[index]=n-v[index];
			index++;
			k--;
		}
		if(k!=0 && k&1==1)
		{
			auto it=min_element(v.begin(), v.end());
			*it=n-*it;
		}
		cout<<accumulate(v.begin(), v.end(),0);
	}
	return 0;
}