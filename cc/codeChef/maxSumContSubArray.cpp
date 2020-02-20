#include<bits/stdc++.h>
#define endl "\n"

using namespace std;
/////////////////////////////////////////////
int maxSubArray(const vector<int> &A) {
	int maxSubArraySum = A[0] ;
	int runningSum = A[0] ;
	for(int i = 1;i<A.size();i++
)	{
		int n1 = runningSum + A[i];
		if(A[i] > n1)
		{
			runningSum = A[i];
		}
		else runningSum += A[i];
		if(runningSum > maxSubArraySum)
			maxSubArraySum = runningSum;
	}
	return maxSubArraySum;

}

//////////////////////////////////////////////
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
	int temp;
	vector<int> A;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		A.push_back(temp);

	}
	int maxSubArraySum =  maxSubArray(A);
	cout<<maxSubArraySum<<endl;
	

return 0;
}