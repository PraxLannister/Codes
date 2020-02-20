#include<bits/stdc++.h>
using namespace std;
class Car
{
public:
	int id;
	int x;
	int y;

	Car(int id,int x ,int y){
		this->id=id;
		this->x=x;
		this->y=y;
	}

	int distance(){
		return x*x+y*y;
	}

	void print(){
		cout<<"ID-> "<<id;
		cout<<"  Loaction("<<x<<","<<y<<")"<<endl;
	}	
};

class CarCompare
{
public:
	bool operator()(Car a, Car b){
		//This answers Should a car come before Car b
		// As we know that according toq its implementation if we want smallest car to pop fist then
		// it should present at last
		// so greater distanced should be present before smaller distanced car
		//if a > b then true 
		return (a.distance() > b.distance());
	}

};
int main()
{
	priority_queue<Car,vector<Car>,CarCompare > pq;
	int x[]={0,3,4,5,667,72,93,49,668,5};
	int y[]={1,4,4,23,46,23,34,12,5,122};
	for(int i=0;i<10;i++)
	{
		Car c(i,x[i],y[i]);
		pq.push(c);
	}
	while(!pq.empty()){
		Car p=pq.top();
		p.print();
		pq.pop();
	}


	return 0;
}