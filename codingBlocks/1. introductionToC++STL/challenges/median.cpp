#include <iostream>
#include<vector>
#include<climits>
using namespace std;

double findMedianOfTwoSortedArray(vector<int> &v1,vector<int> &v2)
{
	int x = v1.size();
	int y = v2.size();
	//cout<<"x "<<x<<" y "<<y<<endl;
	if(x>y)
	 	return findMedianOfTwoSortedArray(v2,v1);
	 int lo = 0;
	 int hi = x;
	while(lo<=hi)
	{
		int partitionX = lo + (hi-lo)/2;
		int partitionY = (x+y+1)/2-(partitionX);
		cout<<"partitionX "<<partitionX<<" partitionY "<<partitionY<<endl;

		int maxLeftX  = (partitionX == 0)?INT_MIN:v1[partitionX-1];
		int minRightX = (partitionX == x)?INT_MAX:v1[partitionX];
		cout<<"maxLeftX "<<maxLeftX<<" minRightX "<<minRightX<<endl;


		int maxLeftY  = (partitionY == 0)?INT_MIN:v2[partitionY-1];
		int minRightY = (partitionY == y)?INT_MAX:v2[partitionY];
		cout<<"maxLeftY "<<maxLeftY<<" minRightY "<<minRightY<<endl;


		if(maxLeftX<=minRightY && maxLeftY<=minRightX)
		{
			if((x+y)%2==0){
				double  n1 = (max(maxLeftX,maxLeftY)+min(minRightX,minRightY))/2.0;
				return n1;
			}
			else {
				double n2 = max(maxLeftY,maxLeftX);
				return n2;
			}
			
		}
		else if(maxLeftX>minRightY)
			hi = partitionX -1;
		else lo = partitionX+1;



	}
	return 1.00;
}


int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
    	
    	freopen("output.txt", "w", stdout);
	#endif


    vector<int> v1;
    vector<int> v2;

	int n1,n2;
	cin>>n1>>n2;
	int temp;

	for(int i=0;i<n1;i++)
	{
		cin>>temp;
		v1.push_back(temp);
	}
	for(int i=0;i<n2;i++)
	{
		cin>>temp;
		v2.push_back(temp);
	}
	double ans = findMedianOfTwoSortedArray(v1,v2);
	cout<<ans<<endl;
	

return 0;
}