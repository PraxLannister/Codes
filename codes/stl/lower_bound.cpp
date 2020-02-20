#include <vector>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
	std::vector<int> v;
	std::vector<int>::iterator low;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		v.push_back(temp);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";
	cout<<endl;
	int key;
	cin>>key;
	low=lower_bound(v.begin(),v.end(),key);
	cout<<"\n======================\n"<<v[low]
	cout<<"=======================\n"<<(low-v.begin())<<"\n=========================\n";

	return 0;
}