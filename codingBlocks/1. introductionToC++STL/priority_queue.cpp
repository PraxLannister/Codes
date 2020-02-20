/*
template 
<class T, class Container = vector<T>,  class Compare = less<typename Container::value_type> > 
class priority_queue;
  */
#include<iostream>
#include<queue>
using namespace std;

struct comparatorr{
	bool operator()(int a,int b)
	{
		//returns the answer to "Should a before b"
		if(a<b)
			return false;
		return true;
	}
};

int main()
{
	priority_queue<int> pq;
	pq.push(10);
	pq.push(11);
	pq.push(1);
	cout<<pq.top()<<endl;

	priority_queue<int,vector<int> ,comparatorr> pq1;
	pq1.push(10);
	pq1.push(11);
	pq1.push(1);
	cout<<pq1.top()<<endl;



	return 0;
}