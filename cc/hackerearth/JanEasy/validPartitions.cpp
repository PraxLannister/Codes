#include<iostream>
#include<cstring>

using namespace std;

void print(string s, int k)
{
	if(s.length()==1)
		cout<<s;
	else
	{
		int t = 0;
		for(int i=0;i<s.length();i++)
		{
			cout<<s[i];
			t++;
			if(t==k && i!=s.length()-1){
				t=0;
				cout<<"-";
			}

		}
	}
}
int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
    	
    	freopen("output.txt", "w", stdout);
	#endif


	int test;
	cin>>test;
	while(test--)
	{
		int k;
		string s;
		cin>>s>>k;
		int no_of_part = s.length()/k;
		int len_of_last = s.length()%k;
		if(len_of_last) no_of_part++;
		if(no_of_part>=k)
		{
			if(len_of_last)
			{
				if(len_of_last==k-1 || len_of_last==k)
					print(s,k);
				else cout<<-1;
			}
			else
				print(s,k);
		}
		else 
			cout<<-1;
		cout<<endl;
	}
	

return 0;
}