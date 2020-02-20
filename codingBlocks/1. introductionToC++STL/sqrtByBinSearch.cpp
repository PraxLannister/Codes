#include<iostream>
using namespace std;
int main()
{
	int numSqrtRoot(int);
	int num;
	cin>>num;
	for(int i=0;i<=num;i++){
	int sqrt=numSqrtRoot(i);
	cout<<sqrt<<"     "<<i<<endl;
	}
	return 0;
}
int numSqrtRoot(int num)
{
	int ans=-1;
	int l=0;
	int r=num;
	int mid;
	
	while(l<=r)
	{
		mid=(l+r)/2;
	//	cout<<mid<<endl;
		if((mid*mid)<=num)
		{
			ans=mid;
			l=mid+1;
		}
		else r=mid-1;
	}
	return ans;
}