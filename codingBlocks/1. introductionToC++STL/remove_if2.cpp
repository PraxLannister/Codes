// Date Created Dec16 6.36pm
/*=====================================================
remove_if behaviour
ForwardIterator remove_if(ForwardIterator first ,ForwardIterator last, pred)
{
	ForwardIterator result = first
	while(first!=last)
	{
		if(!pred(*first))
		{
			*result=*first
			result++;
		}
		first++;
	}
	return result;
}
*/

#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool isTobeRemoved(int n)
{
	return n==0; 
}

int main()
{
	std::vector<int> v;
	int n;
	cin>>n;
	v.resize(n);
	int temp;
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		v.push_back(temp);
	}
	std::vector<int>::iterator it;
	it=remove_if(v.begin(),v.end(),isTobeRemoved);
	for(std::vector<int>::iterator p=v.begin();p!=it;p++)
		cout<<' '<<*p;
	cout<<endl;
	return 0;

}