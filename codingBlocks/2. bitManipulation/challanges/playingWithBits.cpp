#include<iostream>
using namespace std;
int setBitCount(int n)
{
    int count=0;
    int last_bit;
    while(n)
    {
        last_bit=(n&1);
        count += last_bit;
        n = n>>1;        
    }
    return count;
}

int main() {
    int test,first,second;
    cin>>test;
    while(test--)
    {
        cin>>first>>second;
        int sum=0;
        for(int i=first;i<=second;i++)
        sum += setBitCount(i);
        cout<<sum<<endl;
    }
    
	return 0;
}