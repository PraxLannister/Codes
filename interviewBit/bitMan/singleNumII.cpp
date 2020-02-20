#include<iostream>
#include<vector>
using namespace std;



int singleNumber(const vector<int> &A) {
    int bitSet[31]={0};
    
    for(int i=0;i<31;i++)
    {
    	int mask = 1<<i;
    //	cout<<"mask is "<<mask<<endl;
    	for(int x : A)
    	{
    		if(x & mask)
    			bitSet[i]++;
    	}
    }

    cout<<endl;
    for(int i=0;i<31;i++){
    	//cout<<bitSet[i]<<' ';
        bitSet[i]= bitSet[i]%3;
    }
        
    int num =0;
    int pow =1;
    for(int i=0;i<31;i++)
    {
        pow = 1<<i;
        if(bitSet[i]==1)
        {
            num = num + pow * 1;
        }
    }
    return num;
}


int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
    	
    	freopen("output.txt", "w", stdout);
	#endif


    vector<int> v;
	int num;
	cin>>num;
	for(int i=0;i<num;i++){
		int temp;
		cin>>temp;
		v.push_back(temp);
	}
	int n = singleNumber(v);
    cout<<endl<<n;

return 0;
}