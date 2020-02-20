#include<iostream>
#include <vector>
#include <algorithm>
#define endl "\n"
using namespace std;

vector<int> plusOne(vector<int> &A) 
{
    int carry=1,digit,num;
    vector<int> ans;
    reverse(A.begin(), A.end());
  	for(int i : A)
  	{
  		//cout<<"i :"<<i;
  		num = i + carry;
  		//cout<<" num :"<<num;
  		digit = num %10;
  		//cout<<" digit : "<<digit;
  		carry = num /10;
  		//cout<<" carry : "<<carry<<endl;
  		ans.push_back(digit);
   	}
   	if(carry)
   		ans.push_back(carry);
   	int j = ans.size()-1;
   	while(ans[j]==0){
   		ans.pop_back();
  	 	j--;
   	}

   	reverse(ans.begin(), ans.end());

   	return ans;

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


	int n;
	cin>>n;
	vector<int> A;
	vector<int> ans;

	for(int i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		A.push_back(temp);

	}
	ans = plusOne(A);
	for(int i : ans)
		cout<<i;
	 
	

return 0;
}