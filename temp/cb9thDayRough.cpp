#include<iostream>
#include <algorithm>
#include<cstring>
using namespace std;

int strToNum(string str)
{
	int ans = 0;
	int power = 1;
	for(int i=str.length()-1;i>=0;i--){
		ans += (str[i]-'0')*power;
		power *=10;
	}
	return ans;
}

bool numericComparator(pair<string,string> pair1,pair<string,string> pair2)
{
	string key1=pair1.first;
	string key2=pair2.first;
	return strToNum(key1)<strToNum(key2);
}

bool lexicographicalComparator(pair<string,string> pair1,pair<string,string>pair2)
{
	return pair1.first<pair2.first;
}



string extractToken(string str,int key)
{
	char *tok=(char *)strtok((char*)str.c_str()," ");
	while(key>1)
	{
		tok = (char *)strtok(NULL," ");
		key--;
	}
	return (string)tok;
}

int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
    	
    	freopen("output.txt", "w", stdout);
	#endif

    int n;
    cin>>n;
    cin.get();// to consumes the space
    string strArr[n];
    for(int i=0;i<n;i++)
    	getline(cin,strArr[i]);
    int key;
    string reversed,comparator;
    cin>>key>>reversed>>comparator;
    pair<string,string> strPair[n];
    for (int i = 0; i < n; ++i)
    {
    	strPair[i].first=extractToken(strArr[i],key);
    	strPair[i].second=strArr[i];
    }
    if(comparator=="numeric")
    	sort(strPair,strPair+n,numericComparator);
    if(comparator=="lexicographical")
    	sort(strPair,strPair+n,lexicographicalComparator);
    

    if(reversed == "true")
    {
    	for (int i = 0; i < n/2; ++i)
    	{
    		swap(strPair[i],strPair[n-i-1]);
    	}
    }


    for (int i = 0; i < n; ++i)
    {
    	cout<<strPair[i].second<<endl;
    }

	 	return 0;
}
