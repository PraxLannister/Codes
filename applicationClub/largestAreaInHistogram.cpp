#include<iostream>
#include<vector>
#include <climits>
#include<stack>
#define endl "\n"
using namespace std;

int largestRectangleArea(vector<int>& v) {
	if(v.size()==0)
		return 1;	
	stack<int> s;
	int n = v.size();
	int largestArea=INT_MIN;
	int area;
	for(int i=0;i<n;i++)
	{
		if(s.empty())
			s.push(i);
		else {
			int bar = v[i];
			if(bar<v[s.top()])
			{
				while(bar<v[s.top()])
				{
					int topIndex = s.top();
					s.pop();
					if(s.empty())
					{
						area = v[topIndex]*i;
					}
					else
					{
						area = v[topIndex] *(i-s.top()-1);
					}
					largestArea = max(area,largestArea);

				}
				s.push(i);
			}

		}
	}
	return  largestArea;

}

using namespace std;
int main()
{
/*	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
       	freopen("output.txt", "w", stdout);
       	freopen("error.txt", "w", stderr);

	#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);*/


	int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		v.push_back(temp);
	}
	int ans = largestRectangleArea(v);
	cout<<ans<<endl;
	

return 0;
}