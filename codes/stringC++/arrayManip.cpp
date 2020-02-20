#include<bits/stdc++.h>
using namespace std;
int main()
{
        #ifndef ONLINE_JUDGE
            
            freopen("input.txt", "r", stdin);
            
            freopen("output.txt", "w", stdout);
        #endif

    int n,q;
    int arr[n+2]={0};
    cin>>n>>q;
    int l,r,num;
    for(int i=0;i<q;i++){
        cin>>l>>r>>num;
        arr[l]+=num;
        arr[r+1]-=num;
        for(int i=0;i<n+2;i++)
            cout<<"= "<<arr[i];
        cout<<endl<<endl;
    }
    for(int i=1;i<n+2;i++){
        arr[i]+=arr[i-1];
    }
    
}