#include<iostream>
using namespace std;

int __sqrt(int x) {
	if (x == 0) return 0;
	int start = 1, end = x, ans;
	while (start <= end) {
	    int mid = (start + end) / 2;
	    if (mid <= x / mid) {
	        start = mid + 1;
	        ans = mid;
	    } else {
	        end = mid - 1;
	    }
	}
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
	cout<<__sqrt(n);
	

return 0;
}