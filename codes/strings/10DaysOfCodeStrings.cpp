#include<bits/stdc++.h>
using namespace std;

string extractTokens(string str , int k)
{
	string token;
	token = strtok((char *)str.c_str()," ");
	while(k>1){
		token = strtok(NULL," ");
		k--;
	}
	return token;
}

int toNum(string s)
{
	int n = s.length();
	int ans = 0,p = 1;
	for(int i=n;i>=0;i--)
	{
		ans += (s[i]*p);
		p = p*10;
	}
	return ans;
}
bool numericComp(pair<string,string> p1 , pair<string, string> p2)
{
	int key1 = toNum(p1.second);
	int key2 = toNum(p2.second);
	return key1<key2;
}
bool lexicoCompare(pair<string,string> p1 , pair<string, string> p2)
{
	string key1 = (p1.second);
	string key2 = (p2.second);
	return key1<key2;
}


int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
    	
    	freopen("output.txt", "w", stdout);
	#endif
    int n;
    cin>>n;
    string strArr[n];
    int key;
    string reversed,type;
    
    cin.get();
    
    for(int i = 0;i<n;i++)
    {
    	getline(cin,strArr[i]);
    }
    
    cin>>key>>reversed>>type;
    
    pair<string,string> pairSting[n];
    for(int i=0;i<n;i++)
    
    for(int i=0;i<n;i++)
    {
    	pairSting[i].first = strArr[i];
    	pairSting[i].second = extractTokens(strArr[i],key);
    }

    if(type  == "numeric")
    	sort(pairSting,pairSting+n,numericComp);

    else
    	sort(pairSting,pairSting+n,lexicoCompare);

    if(reversed == "true")
    	reverse(pairSting,pairSting+n);
	
	    for(int i=0;i<n;i++)
	       	cout<<pairSting[i].first<<endl;
	    	    

return 0;
}