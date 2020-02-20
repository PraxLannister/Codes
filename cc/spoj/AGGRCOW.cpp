#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isValid(std::vector<int > v,int c,int ans){
	int noOfCow=1;
	int sum = v[0];
	for(int i=1;i<v.size();i++){
		if((v[i] - sum)>= ans){
			noOfCow++;
			sum = v[i];
		}

	}
	if(noOfCow>=c)
		return true;
	return false;
}
int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
    	
    	freopen("output.txt", "w", stdout);
	#endif

    int test;
    cin>>test;
    while(test--){
    	int n, c;
    	cin>>n>>c;
    	std::vector<int> v;
    	for(int i=0;i<n;i++){
    		int temp;
    		cin>>temp;
    		v.push_back(temp);
    	}
    	sort(v.begin(), v.end());
    	int max = *v.rbegin();
    	int lo =0;
    	int hi = max;
    	int mid,ans=0;
    	while(lo<=hi){
    		mid = lo + (hi -lo)/2;
    		if(isValid(v,c,mid)){
    			ans = mid;
    			lo = mid + 1;
    		}
    		else hi = mid - 1;
    	}
    	cout<<ans<<endl;
    }
    

	

return 0;
}