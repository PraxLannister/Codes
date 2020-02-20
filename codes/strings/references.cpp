#include<iostream>

using namespace std;

int &func()
{
	static int a = 10;
	return ;a
}

int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
    	
    	freopen("output.txt", "w", stdout);
	#endif


	int &y=func();
	y++;
	cout<<y<<endl;
	cout<<func();

	

return 0;
}