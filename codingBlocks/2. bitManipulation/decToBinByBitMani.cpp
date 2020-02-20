#include <iostream>
#include <vector>
#include<cstring>
using namespace std;

string binary;

void decToBin(int n)
{

	if(n>0)
	{
		int las_bit=(n&1);
		decToBin(n>>1);
		binary.push_back(las_bit+'0');
	}
}

int decToBin2(int n)
{
	int ans=0;
	int placevalue=1;

	while(n)
	{
		int las_bit=(n&1);
		ans += las_bit*placevalue;
		placevalue *= 10;
		n=n>>1;
	}
	return ans;
}

int main()
{
	int n;
	while(1)
	{
		cin>>n;
		cout<<endl;
		decToBin(n);
		cout<<binary;
		binary.clear();
		cout<<endl;
		cout<<"2nd meth : "<<decToBin2(n);
		cout<<endl;
	}

}