#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

///////////////////////////////////////////
int solution(long long arr[] ,int n)
{
    long long sum =0;
    long long preSum[n];
    preSum[0]=arr[0];
    for(int i=1;i<n;i++)
        preSum[i] = arr[i] + preSum[i-1];
    if(preSum[n-1]>0)
        return n;
   
 }
////////////////////////////////////////////
int main()
{
    #ifndef ONLINE_JUDGE
        
        freopen("input.txt", "r", stdin);
           freopen("output.txt", "w", stdout);
           freopen("error.txt", "w", stderr);

    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        long long  arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
     //   sort(arr,arr+n,greater<int>());
        int len = solution(arr,n);
        cout<<len<<endl;
  
    }
}