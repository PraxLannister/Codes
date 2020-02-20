#include <iostream>
#include<vector>
using namespace std;


int firstSetBitPos(int n)
{
	int pos=0;
	while(n)
	{
		int last_bit = (n&1);
		if(last_bit)
			break;
		else
		{
			pos++;
			n = n>>1;
		}
	}
	return pos;
}

std::vector<int> uniqueNumber2(int *arr , int n )
{
	std::vector<int> v;
	int ans1=0;
	int ans2=0;
	for(int i=0;i<n;i++)
		ans1 ^= arr[i];
	int set_bit_pos= firstSetBitPos(ans1);
	ans1=0;
	int mask = (1<<set_bit_pos);
	for(int i=0;i<n;i++)
	{
		if(arr[i]&mask)
			ans1 ^= arr[i];
		else 
			ans2 ^=arr[i];
	}
	int min,max;
	if(ans2<=ans1)
	{
		min=ans2;
		max=ans1;
	}
	else
	{
		min=ans1;
		max=ans2;
	}

	v.push_back(min);
	v.push_back(max);
	return v;


}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	std::vector<int> v = uniqueNumber2(arr,n);
	cout<<v[0]<< " "<<v[1]<<endl;

}