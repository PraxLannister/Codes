#include<set>
#include<algorithm>
#include<iostream>
#include<stdlib.h>
using namespace std;
void show()
{
	cout<<"1.Insert\n2.Delete\n3.Find\n4.exit\n";
}
int main()
{
	set<int> s;
	set<int>::iterator it;
	int choice;
	int ele;
	while(1)
	{
		show();
		cin>>choice;
		switch(choice)
		{
			case 1:
						cin>>ele;
						s.insert(ele);
						break;
			case 2:
						cin>>ele;
						s.erase(ele);
						break;
			case 3:			
						cin>>ele;
						it=s.find(ele);
						if(it!=s.end()){
							cout<<"Yes\n";
							cout<<*it<<"   -------\n";
						}
						else cout<<"No\n";
						break;
			case 4:		exit(0);



		}

	}
}