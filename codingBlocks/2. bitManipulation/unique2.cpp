#include<iostream>
using namespace std;

int firstSetBitPos(int n)
{
	int pos =0;
	while(n)
	{
		if(n&1)
		return pos;
		pos++;
		n >>= 1;
	}
	return -1;
}

int main()
{
	int n,x,y;
	int res = 0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		res ^= arr[i];
	}
	int pos = firstSetBitPos(res);
	int mask = 1<<pos;
	for(int i=0;i<n;i++)
	{
		if(arr[i] & mask)
			x ^= arr[i];
	}
	y = y^res;
	cout<<min(x,y)<<" "<<max(x,y);
}