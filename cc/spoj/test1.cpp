#include<bits/stdc++.h>

using namespace std;


int main() {
    long long int l,r;
    int t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>l>>r;
        long long int ll=floor(sqrt(l));
        long long int rr=floor(sqrt(r));
        cout<<ll<<endl<<rr;
        rr=ll-rr;
        cout<<rr;
    }
        
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
