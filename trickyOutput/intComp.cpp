#include <iostream>
using namespace std;

int main()
{
    if (sizeof(int) > -1)
        cout << "Yes";
    else
        cout << "No";
    return 0;
} 

/*


Explanation
In C++, when an integer value is compared with an unsigned int,
the int is promoted to unsigned. 
Negative numbers are stored in 2’s complement form 
and unsigned value of the 2’s complement form 
is much higher than the sizeof int.

*/