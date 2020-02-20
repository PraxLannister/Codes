#include<iostream>

using namespace std;
int squareRoot(int num)
{
	int l=0,r=num;
	int mid,ans=0;
	while(l<=r)
	{
		mid=l+(r-l)/2;
		if(mid*mid<=num){
			ans=mid;
			l=mid+1;
		}
		else r=mid-1;
	}
	return ans;
}

int main()
{
	int num,precision;
	while(1)
	{
		cout<<"Enter Number And precision :";
		cin>>num>>precision;
		float ans=squareRoot(num);
		float inr=0.1;
		for(int i=0;i<precision;i++)
		{
			while(ans*ans<=num)
				ans+=inr;
			ans-=inr;
			inr/=10;
		}
		cout<<endl<<"The sqrt is : "<<ans<<endl<<"================="<<endl;




	}
	return 0;
}