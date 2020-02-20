#include <iostream>
#include<string.h>

using namespace std;

void filterChars(char arr[], int n)
{
	int j=0;
	int last_bit;
	while(n)
	{
		last_bit=(n&1);
		if(last_bit)
			cout<<arr[j];
		j++;
		n = n>>1;
	}
	cout<<endl;
}

void printSubsets(char arr[])
{
	int n = strlen(arr);
	n = (1<<n);
	for(int i=0;i<n;i++)
		filterChars(arr,i);
}

int main()
{
	char arr[20];
	cin>>arr;
	printSubsets(arr);
	return 0;
}