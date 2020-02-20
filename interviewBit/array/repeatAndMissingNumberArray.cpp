#include<iostream>
#include<vector>
#define endl "\n"
#define ll long long
using namespace std;
ll fact(int n)
{
	if(n==1 or n==0)
		return 1l;
	ll ans = (ll)n*fact(n-1);
	return ans;
}
vector<int> repeatedNumber(const vector<int> &A) {
	int n = A.size();
	long long sumOfN = (long long)n*(n+1)/2l;
	long long prodOfSqrOfN = ((long long)n*(n+1)*(2*n+1))/6l;
	long long sum = 0l;
	long long prodOfSqr = 0l;
	for(int i=0;i<A.size();i++){
		sum += (long)A[i];
		prodOfSqr += (long)A[i]*A[i];
	}
	long long sumDiff = sumOfN - sum;
	long long sumOfSqrDiff = prodOfSqrOfN - prodOfSqr;
	long long MminusR=sumDiff;
	long long MplusR=(sumOfSqrDiff)/MminusR;
	int M = (MplusR + MminusR)/2;
	int R = MplusR - M;
	vector<int> ans(2);
	ans[0]=R;
	ans[1]=M;
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


	int n;
	cin>>n;
	vector<int> A;
	for(int i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		A.push_back(temp);

	}
	vector<int> ans = repeatedNumber(A);
	for(ll i : ans)
		cout<<i<<" ";
	

return 0;
}