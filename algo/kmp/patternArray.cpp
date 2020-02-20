#include<iostream>
#include <string>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
    	
    	freopen("output.txt", "w", stdout);
	#endif


	string pattern;
	cin>>pattern;
	int size = pattern.size();
	int arr[size]={0};
	int j=0;
	for(int i=1;i<size;)
	{
		if(pattern[i]==pattern[j])
		{
			arr[i]=j+1;
			j++;
			i++;
		}
		else
		{
			if(j!=0)
				j=arr[j-1];	
			else
				i++;			
		}
	}
	for(int i=0;i<size;i++)
		cout<<arr[i]<<" ";

return 0;
}