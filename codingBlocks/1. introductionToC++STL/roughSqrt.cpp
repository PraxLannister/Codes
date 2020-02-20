#include<iostream>

using namespace std;
int intSquareRoot(int num)
{
	int l=1;
	int r= num;
	int ans=1;
	while(l<=r)
	{
		int mid=l+(r-l)/2;
		if(mid*mid<=num)
		{
			ans=mid;
			l=mid+1;
		}
		else
			r=mid-1;
	}
	return ans;
}

int main()
{
	int num;
	cin>>num;
	cout<<intSquareRoot(num);
	long double ansWithPrecision=intSquareRoot(num);
	int precision;
	cout<<"\nntr precision: ";
	cin>>precision;
	long double inr =0.1;
	for(int i=0;i<precision;i++)
	{
		while(ansWithPrecision*ansWithPrecision <= num)
			ansWithPrecision+=inr;
		ansWithPrecision-=inr;
		inr/=10;
	}
	cout<<'\n'<<ansWithPrecision;


	return 0;

}