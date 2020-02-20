#include<stdio.h>

void merge(int arr[],int start,int mid,int end)
{

	int i=start,j=mid+1,t=0;
	int size=end-start+1;
	int temp[size];
	while(i<=mid && j<=end)
	{
		if(arr[i]>arr[j])
			temp[t++]=arr[i++];
		else 
			temp[t++]=arr[j++];
	}
	while(i<=mid)
		temp[t++]=arr[i++];
	while(j<=end)
		temp[t++]=arr[j++];
	for(i=0,j=start;i<size;i++,j++)
	{
		arr[j]=temp[i];
	}
}
void mergeSort(int arr[],int start,int end)
{
	if(start<end)
	{
		int mid=(start+end)/2;
		mergeSort(arr,start,mid);
		mergeSort(arr,mid+1,end);
		merge(arr,start,mid,end);

	}
}
int main()
{
	int b,n,m,t;
	scanf("%d %d %d",&b,&n,&m);
	int keyboard[n];
	int usb[m];
	for(t=0;t<n;t++)
		scanf("%d",&keyboard[t]);
	for(t=0;t<m;t++)
		scanf("%d",&usb[t]);

	int sumArray[n*m];
	int i,j,s=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			sumArray[s++]=keyboard[i]+usb[j];
		}
	}
	s--;
	int sum=-1;
	mergeSort(sumArray,0,s);
	for(i=0;i<n*m;i++)
	{
		if(sumArray[i]<=b)
		{
			sum=sumArray[i];
			break;
		}
	}
	printf("%d\n",sum );


	return 0;
}