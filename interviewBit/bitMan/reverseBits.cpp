#include<iostream>
using namespace std;



unsigned int reverse(unsigned int n) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details



    int bitArray[32]={0};
	int i=31;
	while(n)
	{
		if(n&1)
			bitArray[i]=1;
		n = n>>1;
		i--;
	}
	long num = 0;
	long pow = 1;
	
	for(int i : bitArray)
	{
		num += i*pow;
		pow=pow<<1;
	}
	return num;
}





int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
       	freopen("output.txt", "w", stdout);
       	freopen("error.txt", "w", stderr);

	#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	long n;
	cin>>n;
	//reverse(n);
	unsigned int num = reverse(n);
	cout<<num<<endl;


return 0;
}