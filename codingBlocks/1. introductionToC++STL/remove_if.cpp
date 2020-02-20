#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool predicate(int a)
{
	if(a<0){
		cout<<"i am gone "<<a<<endl;
		return true;
	}
	return false;
}
bool predicate2(int a)
{
	if(a==0){
		cout<<"i am gone "<<a<<endl;
		return true;
	}
	return false;
}

int main()
{
	std::vector<int> v(10);
	for(int i=0;i<10;i++)
		cin>>v[i];
	remove_if(v.begin(), v.end(),predicate);
	for(int i=0;i<10;i++)
		cout<<v[i]<<" ";
	cout <<endl;
	int arr[10];
	cout<<"Now enter array((==0 remove_if): since it requires forward iterator :"<<endl;
	for(int i=0;i<10;i++)
		cin>>arr[i];
	remove_if(arr,arr+10,predicate2);
	for(int i=0;i<10;i++)
		cout<<arr[i]<<" ";
	return 0;
}