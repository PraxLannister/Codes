#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &A, int B) {
    sort(A.begin(),A.end());
    int count=0;
    for(auto i = A.begin();i<A.end();i++)
    {
    	cout<<*i<<" == ";
        auto f = lower_bound(next(i),A.end(),(B-(*i)));
        if(f!=A.end() and  *f==(B-*i)){
            cout<<*f<<" "<<endl;
            count++;
        }
    }
    return count;
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


	vector<int> v;
	int n,key;
	cin>>n>>key;
	for(int i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		v.push_back(temp);
	}
	int ans = solve(v,key);
	cout<<"\nans = "<<ans<<endl;

return 0;
}