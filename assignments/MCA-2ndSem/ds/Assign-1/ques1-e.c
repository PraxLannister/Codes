// Author - Prakhar Shekhar Parthasarthi
// Roll No - 2019CA66
// Date Created - Jan 8th 2020
// Description - Ass1-1-e-Binary Search Using Recursion

#include<stdio.h>

//merge procedure to megre two sorted array into one sorted array
void merge(int arr[], int p ,int q,int r){
	int n = r-p+1;
	int tempArr[n];//to store combined sorted array 
	int i=p;
	int j=q+1;
	int t = 0;
	while(i<=q && j<=r){
		if(arr[i]<arr[j])
			tempArr[t++] = arr[i++];
		else
			tempArr[t++] = arr[j++];
	}
	while(i<=q)
		tempArr[t++] = arr[i++];
	while(j<=r)
		tempArr[t++] = arr[j++];
	for(i=p,t=0;i<=r;i++,t++)
		arr[i]=tempArr[t];
}
//merge Sort
void mergeSort(int arr[],int p,int r){
	if(p<r){
	int q = (p+r)/2;
	mergeSort(arr,p,q);
	mergeSort(arr,q+1,r);
	merge(arr,p,q,r);
	}
}
//	binary Search 
//	this function returns index of element if found otherwise -1
int binarySearch(int arr[] ,int p,int r ,int key){
		if(p<=r){
			int mid = p + (r-p)/2;
				if(key == arr[mid])
					return mid;
				else if(key < arr[mid])
					return binarySearch(arr,p,mid-1,key);
				else return binarySearch(arr,mid+1,r,key);
		}
		return -1;
}

int main()
{
	int n;
	printf("\nEnter size of Array : ");
	scanf("%d",&n);
	int arr[n];
	int i;
	printf("\nEnter Array Elements : \n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	mergeSort(arr,0,n-1);
	printf("\n===== New Sorted Array Is =====\n");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n===== Enter Key to be searched in new sorted array =====\n");
	int key;
	scanf("%d",&key);
	int index = binarySearch(arr,0,n-1,key);
	if(index==-1)
		printf("Not Found");
	else
		printf("Found at index : %d ",index);
	printf("\n\n");
return 0;
}
