#include<iostream>
using namespace std;

int getBit(int n ,int i){
	int mask=1<<i;
	int ans=(n&mask);
	cout<<"\n==================\nInside getBit()\n(n&nmask) = "<<ans<<"\n==================\n";
	return ans;
}

void clearBit(int &n,int i){
	int mask = ~(1<<i);
	n=(n&mask);
	cout<<"\n==================\nInside clearBit()\nn = (n&nmask) = "<<n<<"\n==================\n";

}

void setBit(int &n , int i){
	int mask = 1<<i;
	n = n|mask;
	cout<<"\n==================\nInside setBit()\nn = (n&nmask) = "<<n<<"\n==================\n";

}


int main()
{
	int n,i;
	while(1)
	{
		cin>>n>>i;
		if(getBit(n,i)!=0)
			cout<<1;
		else 
			cout<<0;
		cout<<endl;
		cout<<"before clearing ith bit n is : "<<n<<endl;
		clearBit(n,i);
		cout<<"After clearing ith bit n is : "<<n<<endl;
		setBit(n,i);
		cout<<"After clearing ith bit n is : "<<n<<endl;
	}
	return 0;
}