//
// Created by prax-lannister on 19/09/19.
//
#include<stdio.h>
void merggeSort(int arr[],int start,int end)
{
	if(start>=end) return;
	else
	{
		int mid =(start+end)/2;
		merggeSort(arr,start,mid);
		merggeSort(arr,mid+1,end);
		mergge(arr,start,mid,end);
	}
}
void mergge(int arr[],int start,int mid,int end)
{
	int i=start,j=mid+1,t=0;
	int size=end-start+1;
	int brr[size];
	while(i<=mid && j<=end)
	{
		if(arr[i]<arr[j]) brr[t++]=arr[i++];
		else brr[t++]=arr[j++];
	}
	while(i<=mid)
		brr[t++]=arr[i++];
	while (j<=end)
		brr[t++]=arr[j++];
}

int  main()
{
	while(1)
	{
		int a,d;
		if(a==0,d==0) break;
		scanf("%d %d",&a,&d);
		int attacking[a],defending[d];
		int i,j;
		for(i=0;i<a;i++) 
			scanf("%d",&attacking[i]);
		for(i=0;i<d;i++)
			scanf("%d",&defending[i]);
		merggeSort(attacking,0,a-1);
		merggeSort(defending,0,d-1);

		for(i=0;i<a;i++) 
			printf("-%d-",attacking[i]);
		for(i=0;i<d;i++)
			printf("~%d~",defending[i]);
		if(attacking[0]<defending[1]) 
			printf("Y\n");
		else
			printf("N\n");
	}
	return 0;
}
