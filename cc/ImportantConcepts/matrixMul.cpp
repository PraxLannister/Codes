#include<iostream>
#include<vector>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
    	
    	freopen("output.txt", "w", stdout);
	#endif
    	vector<vector<int> > v;


    for(int i=0;i<5;i++){
    	for (int j = 0; j < 5; ++j)
    		v[i][j]=j;
    }

    for (int i = 0; i < 5; ++i)
    {
    	/* code */
    	for (int j = 0; j < 5; ++j)
    	{
    			cout<<v[i][j]<<" ";
    	}
    	cout<<endl;
    }
	

return 0;
}