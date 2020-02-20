#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
    	
    	freopen("output.txt", "w", stdout);
	#endif


	int n;
	unordered_set<int> hash;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		hash.insert(arr[i]);

	}
	for(int i : hash)
		cout<<i<<" ";
	cout<<"\n==========\n";
	int max=0,currMax=0;	
	for(int i : arr){
		cout<<"i "<<i<<endl;
		if(hash.find(i-1)==hash.end()){	
			cout<<"spolcs "<<i<<endl;
			currMax=1;
			int fnd = i+1;
			while(hash.find(fnd)!=hash.end()){
				cout<<"also found "<<fnd<<endl;
				fnd++;	
				currMax++;
			}
		}
		if(currMax>max)
			max = currMax;
	}
	cout<<max;
	

return 0;
}