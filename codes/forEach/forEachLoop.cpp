#include <vector>
#include<iostream>
#include<algorithm>

using namespace std;


class Functor
{
public:
	void operator()(int n)
	{
		cout<<n<<" ";
	}
	/*Functor();
	~Functor();*/
	
}functorObject;

int main()
{
	std::vector<int > v;
	cout<<"v.size() : "<<v.size()<<'\n';
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		v.push_back(temp);
	}
	for_each(v.begin(), v.end(),functorObject);
	return 0;

}