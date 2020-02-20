#include<iostream>
using namespace std;


void maxHeapify(int arr[],int i,int heapSize)
{
	int leftChild = i*2;
	int rightChild = i*2+1;
	int largest = i;
	if(leftChild <= heapSize && arr[largest] < arr[leftChild])
		largest = leftChild;
	if(rightChild <= heapSize && arr[largest] < arr[rightChild] )
		largest = rightChild;
	if(largest != i)
	{
		int temp = arr[i];
		arr[i] = arr[largest];
		arr[largest] = temp;
		maxHeapify(arr,largest,heapSize);
	}
}


void buildHeap(int arr[],int n,int heapSize)
{
	//n/2 to 1
	for(int i=heapSize/2;i>=1;i--)
	{
		maxHeapify(arr,i,heapSize);
	}

}

int extractMax(int maxHeap[],int &heapSize)
{
	if(heapSize < 1)
		{
			cout<<"Error!!";
			return -1;
		}
	int max = maxHeap[1];
	maxHeap[1] = maxHeap[heapSize--];
	maxHeapify(maxHeap,1,heapSize);
	return max;
}

void increaseKey(int a[] , int i ,int value, int heapSize)
{
	if (a[i] > value)
	{
		cout<<"not increaseKey:";
		return;
	}
	a[i] = value;
	while(i>1 && a[i] > a[i/2])
	{
		int temp = a[i];
		a[i] = a[i/2];
		a[i/2] = temp;
		i = i/2;
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
	int maxHeap[n+1];
	for(int i=1;i<=n;i++)
		cin>>maxHeap[i];
	//cout<<"\n";
	int heapSize=n;
	buildHeap(maxHeap,n,heapSize);
	for(int i=1;i<=n;i++)
		cout<<maxHeap[i]<<"-";
	increaseKey(maxHeap,2,200,heapSize);
	cout<<"\n=======================\n";

	for(int i=1;i<=n;i++)
		cout<<maxHeap[i]<<"-";

	cout<<"\n";
	cout<<"\n=======================\n";
	for(int i=1;i<=n+2;i++)
	{
		cout<<extractMax(maxHeap,heapSize);
		cout<<"\n";
	}



	

return 0;
}