#include <bits/stdc++.h>
using namespace std;
void simpleSieve(int lmt, vector<int>& prime) {
   bool mark[lmt + 1];
   memset(mark, false, sizeof(mark));
   for (int i = 2; i <= lmt; ++i) {
      if (mark[i] == false) {
         prime.push_back(i);
         for (int j = i; j <= lmt; j += i)
            mark[j] = true;
      }
   }
}
int  PrimeInRange(int low, int high) {
   int lmt = floor(sqrt(high)) + 1;
   vector<int> prime;
   simpleSieve(lmt, prime);
   int n = high - low + 1;
   bool mark[n + 1];
   memset(mark, false, sizeof(mark));
   for (int i = 0; i < prime.size(); i++) {
      int lowLim = floor(low / prime[i]) * prime[i];
      if (lowLim < low)
         lowLim += prime[i];
      for (int j = lowLim; j <= high; j += prime[i])
         mark[j - low] = true;
   }
   int sum=0;
   for (int i = low; i <= high; i++)
      if (!mark[i - low])
         sum+=i;
     return sum;
}
int main() {

   int low = 16, high = 25;
   int sum=PrimeInRange(low, high);
   int i,sum2=0;
   for(i=low;i<=high;i++)
   {
   	sum2+=i;
   }
   cout<<sum2-sum;
   return 0;
}