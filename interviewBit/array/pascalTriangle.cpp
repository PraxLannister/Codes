#include<iostream>
#include<vector>
#define endl "\n"
using namespace std;
vector<vector<int> > solve(int n) {
	vector<vector<int> > v(n);
	if(n==0)
		return v;
	for(int i=0;i<v.size();i++)
		v[i].resize(i+1);
	v[0][0]=1;
	if(n==1)
		return v;
	for(int i=1;i<v.size();i++)
	{
		int endCol_i = v[i].size()-1;
		for(int j=0;j<v[i].size();j++)
			if(j==0 || j==endCol_i)
				v[i][j]=1;
			else
				v[i][j] = v[i-1][j-1] + v[i-1][j];
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
	vector<vector<int> > v = solve(n);
	for(int i=0;i<v.size();i++)
	{
		for(int j=0;j<v[i].size();j++)
			cout<<v[i][j]<<" ";
		cout<<endl;
	}
	 vector <int> ans;
	int i = n+1, c = 1;
	for(int j=1; j<=i; j++)
	{
	    ans.push_back(c);
	    c = c*(i - j)/j;
	}
	
	for(int i: ans)
		cout<<i<<" ";
	
	

return 0;
}