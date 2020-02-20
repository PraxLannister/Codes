#include<vector>
#include <iostream>
std::vector<long> myFunction(){
   std::vector<long> results;
   results.push_back(10);
   results.push_back(100);
   return results;
}
int main(){
   std::vector<long> vec = myFunction();
   std::cout<< vec[0] <<std::endl;
   std::cout<< vec[1] <<std::endl;
}