#include<stdio.h>
 void insertionSort(int arr[] , int size)
 {
 	int i,j,key;
 	for(j=1;j<size;j++)
 	{
 		key=arr[j];
 		i=j-1;
 		while(i>0 && arr[i]>key)
 		{
 			arr[i+1]=arr[i];
 			i--;
 		}
 		arr[i+1]=key;
 	}
 }
 void main()
 {
 	int size,i;
 	printf("\n->\n");
 	scanf("%d",&size);
 	int arr[size];
 	for(i=0;i<size;i++)
 		scanf("%d",&arr[i]);
 	//int n=sizeof(arr)/sizeof(int);
 	insertionSort(arr,size );
 	printf("\n->\n");
 	for(i=0;i<size;i++)
 	{
 		printf("\n%d\n",arr[i]);
 	}

 }