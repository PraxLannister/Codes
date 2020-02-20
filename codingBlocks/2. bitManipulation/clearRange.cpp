#include<iostream>
using namespace std;

class bitManipulation
{
public:
   void clear_i_bits(int &n,int i)
   {
   		int mask=(-1<<i);
   		n = n&mask;
   }
   void clearRange_i_to_j(int &n,int j,int i)
   {
   		
   		j++;
   		int mask1 = (-1<<j);
   		//cout<<endl<<~mask1;
   		int mask2 = ~(-1<<i);
   		//cout<<endl<<mask2<<endl;
   		int mask = mask1|mask2;
   		//cout<<~mask<<endl;
   		n = n&mask;
   }


};

int main()
{
	bitManipulation bit;
    int n,i,j;
    n=31;
   	bit.clearRange_i_to_j(n,3,1);
   	cout<<n<<endl; 
}