#include<iostream>
using namespace std;

void exchange(int &a , int &b)
{
	//cout<<"Entering exchange : to exchange :"<<a<<","<<b<<endl;
	int temp = a;
	a = b;
	b = temp;
}

void maxHeapify(int arr[] , int i ,int heapSize)
{
	int leftChild = i*2;
	int rightChild = i*2 + 1;
	int largest = i;
	if(leftChild <= heapSize && arr[leftChild] > arr[largest])
		largest = leftChild;
	if(rightChild <= heapSize && arr[rightChild] > arr[largest])
		largest = rightChild;
	if(largest != i)
	{
		exchange(arr[largest],arr[i]);
		maxHeapify(arr,largest,heapSize);
	}
}

void buildHeap(int arr[],int n)
{
	for(int i = n/2; i>=1; i--)
		maxHeapify(arr,i,n);
}


void heapSort(int arr[],int n)
{
	int heapSize = n;
	buildHeap( arr,heapSize);
	for(int i=n;i>1;i--)
	{
		int temp = arr[1];
		arr[1] = arr[i];
		arr[i] = temp;
		heapSize--;
		maxHeapify(arr,1,heapSize);
	}
}

int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
    	
    	freopen("output.txt", "w", stdout);
	#endif


	int n;
	cin>>n;
	int arr[n+1];
	for(int i=1;i<=n;i++)
		cin>>arr[i];
	heapSort(arr,n);
	for(int i=1;i<=n;i++)
		cout<<arr[i]<<" ";


return 0;
}