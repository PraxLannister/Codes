#include<bits/stdc++.h>

using namespace std;

int decimalToBinary(int num)
{
	if(num>0) {
		decimalToBinary(num/2);
		cout<<num%2<<" ";
	}
else return 0;
}

int main()
{
	cout<<"Enter a number in decimal form"<<endl;
	int number;
	cin>>number;
	decimalToBinary(number);
	return 0;
}