/*Find smaalest and swaps with pos 0*/
#include<stdio.h>
#define max 100
void func(int arr, int size)
{
	int min=0,i,j;
	for(i=1;i<size;i++){
		if(arr[min]>arr[i])
			min=i;
	}
	int temp=arr[min];
	arr[min]=*arr;
	*arr=temp;


	
}
int main()
{
	int arr[max],i,size;
	printf("\nEnter size : ");
	scanf("%d",&size);
	printf("\nEnter Array :\n");
	for(i=0;i<size;i++)
		scanf("%d",(arr+i));
	func(arr,size);
	for(i=0;i<size;i++)
		printf("%d",*(arr+i));

	return 0;
}