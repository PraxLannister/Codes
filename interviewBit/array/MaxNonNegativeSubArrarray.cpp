/*  1. If there is a tie, 
	then comake_pairare with segment's length and return segment 
	which has maximum length.
    2. If there is still a tie, 
    then return the segment with minimum starting index.
*/


#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#define endl "\n"
//#define push_back push_back
//#define make_pair make_pair
//#define pair<int,pair<int,int> > pair<int,pair<int,int> > 
using namespace std;

bool myCompare(pair<int,pair<int,int> > p1, pair<int,pair<int,int> > p2)
{
	if(p1.first!=p2.first)
		return p1.first>p2.first;
	int len1 = p1.second.second - p1.second.first;
	int len2 = p2.second.second - p2.second.first;
	if(len1!=len2)
		return len1>len2;
	return p1.second.first>p2.second.first;
}

vector<int> maxset(vector<int> &v) {
	vector<int> ans;
	vector<pair<int,pair<int,int> >> vector;
	int startingIndex = -1;
	int endingIndex = -1;
	int currentSum=0;
	int maxSum = INT_MIN;
	cout<<maxSum<<endl;
	int i=0;
	while(v[i]<0 && i<v.size())
		i++;
	cout<<i<<" starting"<<endl;
	bool flag=false;
	for(;i<v.size();i++)
	{
		flag=true;
		if(v[i]<0)
		{
			if(startingIndex!=-1)
			{
				endingIndex = i-1;
				if(maxSum<=currentSum)
				{
					maxSum=currentSum;
					pair<int,int> indices = make_pair(startingIndex,endingIndex);
					vector.push_back(make_pair(maxSum,indices));
				}
			}
			startingIndex=-1;
			currentSum=0;				
		} 
		else if(i<v.size())
		{
			currentSum += v[i];
			cout<<currentSum<<" i= "<<i<<" \n";
			if(startingIndex==-1)
				startingIndex = i;
		}
	}
	if(flag && maxSum<=currentSum){
		endingIndex = i-1;
		maxSum=currentSum;
		pair<int,int> indices = make_pair(startingIndex,endingIndex);
		vector.push_back(make_pair(maxSum,indices));
	}
	cout<<"\n===\n";
	for(auto i: vector)
		cout<<i.first<<" "<<i.second.first<<" "<<i.second.second;
	cout<<"\n===\n";

	if(!vector.empty() && maxSum!=INT_MIN)
	{
		cout<<"inside";
		sort(vector.begin(), vector.end(),myCompare);
		int i=vector[0].second.first;
		int j=vector[0].second.second;
		cout<<" i j "<<i<<" "<<j<<" "<<maxSum<<endl;
		while(i<=j){
			ans.push_back(v[i]);
			i++;
		}
	}
	return ans;

}


int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
       	freopen("output.txt", "w", stdout);
	#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> v;
	int n;
	int temake_pair;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>temake_pair;
		v.push_back(temake_pair);
	}
	vector<int> ans = maxset(v);
	cout<<"\n=====main======\n";
	for(int i: ans)
		cout<<i<<" ";
	

return 0;
}
	