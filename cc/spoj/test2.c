#include<bits/stdc++.h>

using namespace std;


int main() {
    long long int l,r;
    int t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>l>>r;
        long long int lr=sqrt(l);
        long long int rrr=sqrt(r);
        long long int ll=floor(sqrt(l));
        long long int rr=floor(sqrt(r));
        cout<<endl<<rr;
        cout<<endl<<ll;
        rr=rr-ll;
        if(rr%2==0) cout<<"Even"<<endl;
        else cout<<"Odd"<<endl;
        cout<<rr<<endl<<ll ;
        
    }
        
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}