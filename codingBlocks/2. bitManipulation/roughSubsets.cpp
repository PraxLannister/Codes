#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int printSet(string &s , int n);
	#ifndef ONLINE_JUDGE
    	// for getting input from input.txt
    	freopen("input.txt", "r", stdin);
    	// for writing output to output.txt
    	freopen("output.txt", "w", stdout);
	#endif

    string s;
    int num;
    cin>>num;
   	while(num)
   	{
   		int digit = num%10;
   		s.push_back(digit+'0');
   		num/=10;
   	}
    int len = s.length();
    int sum=0;
    int twoPowLen = 1<<len;
    for(int i=1;i<twoPowLen;i++)
    {
    	sum +=printSet(s,i);
    }
    cout<<sum;

	/* code here */
	

return 0;
}
	int printSet(string &s ,int n)
{
	int product=1;
	int sign = -1;
	//cout<<"called for i = "<<n<<endl;
	int last_bit;
	int index=0;
	int count=0;
	while( n )
	{
		last_bit = n&1;
		if(last_bit){
			//cout<<" S[index] "<<s[index];
			count++;
			product *= (s[index]-'0');
		}
		index++;
		n = n>>1;
	}
	product=999/product;
	if(count & 1)
		product *= sign;
	//cout<<endl;
	return -product;
}