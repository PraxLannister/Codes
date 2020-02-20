#include<iostream>
#include<vector>
#include<queue>

using namespace std;

class Car
{
public:
	int id;
	int x_cord;
	int y_cord;
	
	Car(int id ,int x_cord,int y_cord)
	{
		this->id = id;
		this->x_cord = x_cord;
		this->y_cord = y_cord;
	}

	int distance()
	{
		return (x_cord*x_cord + y_cord*y_cord);
	}

	void print()
	{
		cout<<"ID = "<<id<<" ("<<x_cord<<","<<y_cord<<") \n";
	}
		
};

class Compare
{
public:
	bool operator()(Car A, Car B)
	{
		return (A.distance()>B.distance());
	}
}compareObject;

int main()
{
	int n,k;
	cin>>n;
	priority_queue< Car , std::vector<Car> , Compare > pq;
	int x[n],y[n];
	for(int i=0;i<n;i++)
	{
		cin>>x[i]>>y[i];
	}
	for(int i=0;i<n;i++)
	{
		Car car(i,x[i],y[i]);
		pq.push(car);
	}
	/*cout<<"\nNtr k :";
	cin>>k;
	for(int i=0;i<k;i++)
	{
		if(!pq.empty())
		{
			Car result = pq.top();
			result.print();
			pq.pop();
		}

	}*/
	while(!pq.empty())
	{
		Car result=pq.top();
		result.print();
		pq.pop();
	}
	


	return 0;
}