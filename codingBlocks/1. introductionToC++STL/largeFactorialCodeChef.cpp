#include <iostream>
using namespace std;

void multiply(int *a,int &n,int ele)

{
    int product,carry=0;
    for(int i=0;i<n;i++)
    {
        product=a[i]*ele+carry;
        a[i]=product%10;
        carry=product/10;
    }
    while(carry)
    {
        a[n]=carry%10;
        carry/=10;
        n++;
    }
}

void largeFactorials(int num)
{
    int *a=new int[1000]{0};
    a[0]=1;
    int n=1;
    for(int i=2;i<=num;i++)
    {
        multiply(a,n,i);   
    }
    for(int i=n-1;i>=0;i--)
    cout<<a[i];
    cout<<endl;
    
}

int main() {
	// your code goes here
	int num,test;
	cin>>test;
	//cin>>num;
	while(test--)
	{
	    cin>>num;
	    largeFactorials(num);
	}
	return 0;
}
        