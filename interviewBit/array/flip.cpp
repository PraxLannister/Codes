#include<iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> flip(string A) {
	vector<int> v;
	for(char ch : A)
	{
		if(ch=='0')
			v.push_back(1);
		else if(ch=='1')
			v.push_back(-1);
	}

	int i_index=-1;
	int j_index=-1;
	int strore_required_index=0;
	int curr_sum=0,max_sum=0;
	for(int i=0;i<v.size();i++)
	{
		curr_sum += v[i];
		if(curr_sum<0)
		{
			curr_sum = 0;
			strore_required_index = i+1;
		}
		else if(max_sum<curr_sum)
		{
			max_sum = curr_sum;
			i_index = strore_required_index;
			j_index = i;
		}

	}
	vector<int> ans(2);
	if(i_index==-1){
		ans.clear();
		return ans;
	}
	else
	//ans.resize(2);
	ans[0]=i_index+1;
	ans[1]=j_index+1;
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


	string str;
	cin>>str;
	vector<int> ans = flip(str);
	for(int i: ans)
		cout<<i<<" ";
	

return 0;
}