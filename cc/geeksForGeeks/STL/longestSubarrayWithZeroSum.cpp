#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
    	
    	freopen("output.txt", "w", stdout);
	#endif


	int n;
	unordered_map<int,int> umap;
	//map to store key as prefix sum and value as index of that prefix sum
	cin>>n;
	int preSum=0;
//	int index=0;
	int currLen=0,maxLen=0;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		preSum += arr[i];
		cout<<"preSum  :  "<<preSum<<endl;
		if(preSum == 0){
			cout<<i<<" "<<endl;
			currLen = i+1;
		}
		/*if(currLen>maxLen){
			maxLen = currLen;
			currLen 
		}*/
		if(umap.find(preSum)!=umap.end())
		{
			currLen = max(currLen,i-umap[preSum]);

		}
		else{
			umap[preSum]=i;
		}



	}
	cout<<"max "<<currLen;	

return 0;
}