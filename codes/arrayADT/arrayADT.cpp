#include <iostream>
using namespace std;
template<class T>
class Array{

	T *arr;
	int size;
	int data;
	int currIndex=-1;

public:

	Array(int n){
		size = n;
		arr=new T[size];
	}
	~Array(){
		cout<<endl<<size;
		cout<<"\nDestructor Called :"<<endl;
		delete []arr;
	}
	void sort();
	/*void search(T key);
	void binarySearch(T key);
	void display();*/
	void insert(T key){
		arr[++currIndex]=key;
	}
};

template<class T>
void Array<T>::sort(){
	for(int i=-)
}

int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
    	
    	freopen("output.txt", "w", stdout);
	#endif


    int size;
    cin>>size;
    Array<int>  obj(size);
    for(int i=0;i<size;i++){
    	int temp;
    	cin>>temp;
    	obj.insert(temp);
    }
    obj.sort();
	

return 0;
}