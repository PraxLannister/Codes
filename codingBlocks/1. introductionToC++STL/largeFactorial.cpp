#include<iostream>

using namespace std;

void multilply(int *a,int &n,int num)
{
	int product,carry=0;
	for(int i=0;i<n;i++)
	{
		product=a[i]*num+carry;
		a[i]=product%10;
		carry=product/10;
	}
	while(carry)
	{
		a[n]=carry%10;
		carry=carry/10;
		n++;
	}
}


void largeFactorial(int num)
{
	int *a= new int[1000]{0};
	a[0]=1;
	int n=1;

	for(int i=2;i<=num;i++)
	{
		multilply(a,n,i);
	}

	for(int i=n-1;i>=0;i--)
		cout<<a[i];
	cout<<endl<<n;
}

int main()
{
	int num;
	cin>>num;
	largeFactorial(num);
	return 0;

}