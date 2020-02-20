#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;
void simpleSieve(long long int lmt, vector<long long int>& prime) {
   bool mark[lmt + 1];
   memset(mark, false, sizeof(mark));
   for (long long int i = 2; i <= lmt; ++i) {
      if (mark[i] == false) {
         prime.push_back(i);
         for (long long int j = i; j <= lmt; j += i)
            mark[j] = true;
      }
   }
}
long long int  PrimeInRange(long long int low, long long int high) {
   long long int lmt = floor(sqrt(high)) + 1;
   vector<long long int> prime;
   simpleSieve(lmt, prime);
   long long int n = high - low + 1;
   bool mark[n + 1];
   memset(mark, false, sizeof(mark));
   for (long long int i = 0; i < prime.size(); i++) {
      long long int lowLim = floor(low / prime[i]) * prime[i];
      if (lowLim < low)
         lowLim += prime[i];
      for (long long int j = lowLim; j <= high; j += prime[i])
         mark[j - low] = true;
   }
   long long int sum=0;
   for (long long int i = low; i <= high; i++)
      if (!mark[i - low])
         sum=(sum %mod + i %mod)%mod;
     return sum;
}
long long int main() {
    long long int q,i,t;
    cin>>q;
for(t=0;t<q;t++)

{
   long long int low,high;
    cin>>low>>high;
    low=low*low;
    high=high*high;
   long long int sum=PrimeInRange(low, high);
   long long int i,sum2=0;
   for(i=low;i<=high;i++)
  {
       sum2=(sum2%mod + i%mod)%mod;
   }
   cout<<sum2-sum<<endl;
}
    return 0;
}