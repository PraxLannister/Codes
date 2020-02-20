#include<stdio.h>
int binary_search(int arr[],int el,int size)
{
	// array should be sorted
	int start , mid ,end;
	start=0;
	end=size-1;
	while(start<=end){

		mid=(start+end)/2;
		if(arr[mid]==el)
			return mid;
		else if (el < arr[mid])
			end=mid-1;
		else start=mid +1;
	}
	return -1;


}

int main()
{
	int size;
	scanf("%d",&size);
	int i;
	int arr[size];
	for(i=0;i<size;i++)
		scanf("%d",(arr+i));
	int el;
	printf("\nEnter element to be searched : ");
	scanf("%d",&el);
	int pos=binary_search(arr,el,size);
	printf("\nThe pos is : %d\n",pos);

	return 0;
}