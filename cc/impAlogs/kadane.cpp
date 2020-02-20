#include<iostream>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
    	
    	freopen("output.txt", "w", stdout);
	#endif


	int n;
	cin>>n;
	int currMaxSum,maxSubSum=0;
	cin>>maxSubSum;
	currMaxSum = maxSubSum;
	for(int i=1;i<n;i++)
	{
		int num;
		cin>>num;
		if(num>(currMaxSum+num)){
			currMaxSum = num;
		}
		else{
			currMaxSum = num + currMaxSum;
		}
		if(currMaxSum>maxSubSum)
			maxSubSum=currMaxSum;
	}
	cout<<maxSubSum;
	

return 0;
}