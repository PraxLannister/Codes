// Author - Prakhar Shekhar Parthasarthi
// Roll No - 2019CA66
// Date Created - Jan 14th 2020
// Description - Assignment-2-(8)
//Problem Statement =======================================================================

/* Write a program in C to rearrange an array in such an order that– smallest, largest, 2nd
smallest, 2nd largest and so on.*/
#include<stdio.h>

void merge(int *arr,int p ,int m,int r){
	int i = p;
	int j = m+1;
	int t = 0;
	int n = (r-p)+1;
	int tempArr[n];
	while(i<=m && j<=r){
		if(arr[i]<arr[j])
			tempArr[t++]=arr[i++];
		else
			tempArr[t++]=arr[j++];
	}
	while(i<=m)
		tempArr[t++]=arr[i++];
	while(j<=r)
		tempArr[t++]=arr[j++];
	for(int i=p,t=0;i<=r;i++,t++){
		arr[i]=tempArr[t];
	}
}
void changeArr(int *arr,int n)
{
	int tempArr[n+1];
	int t=0;
	for(int i=0,j=n;i<n/2,j>=n/2;i++,j--){
		tempArr[t++]=arr[i];
		tempArr[t++]=arr[j];
	}
	for(int i=0,t=0;i<=n;
			i++,t++){
		arr[i]=tempArr[t];
	}		
}


void mergeSort(int *arr,int p,int r){
	if(p<r){
		int mid =(p+r)/2;
		mergeSort(arr,p,mid);
		mergeSort(arr,mid+1,r);
		merge(arr,p,mid,r);
	}
}

int main(){
/*		#ifndef ONLINE_JUDGE
	    	
	    	freopen("input.txt", "r", stdin);
	    	
	    	freopen("output.txt", "w", stdout);
		#endif*/

	int n;

	printf("enter n\n");
	scanf("%d",&n);

	int arr[n];
	printf("enter array\n");
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&arr[i]);
	}
	mergeSort(arr,0,n-1);
	changeArr(arr,n-1);
	printf("after rearrange:\n");
	for (int i = 0; i < n; ++i)
	{
		printf("%d ",arr[i]);
	}

	return 0;

}