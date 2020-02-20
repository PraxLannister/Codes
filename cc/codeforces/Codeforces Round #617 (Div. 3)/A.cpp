#include<iostream>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
    	
    	freopen("output.txt", "w", stdout);
	#endif


	int test;
	cin>>test;
	while(test--)
	{
		int n;
		cin>>n;	
		int temp;
		int oddNos=0,evenNos=0;
		for(int i=0;i<n;i++)
		{
			cin>>temp;
			if(temp&1)
				oddNos++;
			else
				evenNos++;
		}

		if(oddNos&1)
			cout<<"YES\n";
		else if(oddNos!=0 && evenNos>0)
			cout<<"YES\n";
		else 
			cout<<"NO\n";

	}
	

return 0;
}