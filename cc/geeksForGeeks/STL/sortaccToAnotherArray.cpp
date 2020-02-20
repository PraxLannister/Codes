#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
    	
    	freopen("output.txt", "w", stdout);
	#endif


	int n;
	pair<int,char> P1;
	vector<pair<int ,char> >vp;
	cin>>n;
	int arrNum[n];
	char arrChar[n];
	for(int i=0;i<n;i++)
	{
		cin>>arrNum[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>arrChar[i];
	}
//	cout<<arrNum[1]<<" "<<arrChar[3];
	
	for (int i = 0; i < n; ++i)
	{
		int first,second;
		first = arrNum[i];
		second = arrChar[i];
		P1 = {first,second};
		vp.push_back(P1);
	}
	sort(vp.begin(), vp.end());
	for (int i = 0; i < n; ++i)
	{
		cout<<vp[i].first<<" "<<vp[i].second<<endl;
	}

return 0;
}