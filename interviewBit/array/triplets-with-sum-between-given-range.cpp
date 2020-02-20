#include<iostream>
#include<string>
#include<math.h>
#include<cstring>
#include <vector>
using namespace std;



///////////////////////////////////////////////

//////////////////////////////////////////////
float str_to_float(string str)
{
	cout<<"converting : "<<str<<endl;
	char *decimal = strtok((char*)str.c_str(),".");
	char *fractional = strtok(NULL,"\n");
	int flen = strlen(fractional);
	float fr = atoi(fractional);
	float tenPow = pow(10,flen);
	fr = fr / tenPow;

	float num = atoi(decimal);

	num +=fr;
	return num;
}
/////////////////////////////////////////////
void solve(vector<string> &A) {
	vector<float> v;
	for(int i=0;i<A.size();i++)
	{
		string str =  A[i];
		v.push_back(str_to_float(str));
	}
	prino
	
}

//////////////////////////////////////////
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
	vector<string> v;
	vector<float> float_v;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		string temp;
		cin>>temp;
		v.push_back(temp);
	}
	solve(v);

	
			
	

return 0;
}