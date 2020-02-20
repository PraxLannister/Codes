/* template<class Bidirectional It,class OutPut It>
Output It reverse_copy(Bid_It first ,Bid_it second , Output_It result);

[first,last)  copies to range begining with result
*/

// Author Prakhar Shekhar Parthasarthi
// Date Created : Dec 13
// USe of reverse_copy

#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main()
{
	std::vector<int > v1(10);
	std::vector<int > v2(10);
	for(int i=0;i<10;i++)
		cin>>v1[i];
	reverse_copy(v1.begin(), v1.end(),v2.begin());
	for(int i=0;i<10;i++)
		cout<<v2[i]<<" ";
	return 0;
}