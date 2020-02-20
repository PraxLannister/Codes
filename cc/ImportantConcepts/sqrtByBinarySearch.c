#include<stdio.h>
int floorSqrtByBinarySearch(int n)
{
	int size=n;
	int arr[size];
	int i;
	for(i=0;i<size;i++)
		arr[i]=i;
	int lo=0;
	int hi=size-1;
	int mid;
	int ans=0;
	while(lo<=hi)
	{
		mid=(lo+hi)/2;
		if((arr[mid]*arr[mid])<=n)
		{
			ans=mid;
			lo=mid+1;
		}
		else hi=mid-1;
	}
	return ans;

}

int main()
{
	int num;
	//scanf("%d",&num);
	/*printf("%d\n",floorSqrtByBinarySearch(num) );*/
	for(int i=0;i<100;i++)
		printf("The sqrt(%d) is : %d\n",i,floorSqrtByBinarySearch(i) );

	return 0;
}