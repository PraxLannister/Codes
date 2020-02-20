#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

void swap(char *a,char *b){
	char temp = *a;
	*a = *b;
	*b = temp;
}
int binarySearch(string s,int lo,int hi,char key){
	int index = -1;
	while(lo<=hi){
		int mid = lo + (hi - lo)/2;
		if(s[mid] > key)
		{
			index = mid;
			lo = mid + 1;
		}
		else 
			hi = mid - 1;
	}
	return index;
}
void reverse(string &s , int start,int end ){
	while(start<end)
		swap(string[start++],string[end--]);
}

void nextPalindrome(string &s){
	if(s.length()<=1)
		return;
	if(s.length()==2){
		s=reverse(s,s.begin(),s.end()-1);
		return;
	}

	int end = s.length()-1;
	int index = -1;
	while(i>=0 && str[i]>str[i-1])
		i--;
	index = binarySearch(s,i+1,s.end())

}


int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
    	
    	freopen("output.txt", "w", stdout);
	#endif


	string s;
	cin>>s;
	

return 0;
}