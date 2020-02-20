#include<iostream>

using namespace std;

void swap(char *a,char *b)
{
	char temp=*a;
	*a=*b;
	*b=temp;
}
void reverse(string &s , int l ,int r)
{
	while(l<r)
		s[l++]=s[l--];
}


int leastUpperBound(string s, int l,int r,char key)
{
	//str[l-r] is  sorted in decreasing order 
	int mid;
	int index=-1;
	while(l<=r)
	{
		mid=l+(r-l)/2;
		if(s[mid]<=key)
			r=mid-1;
		else
		{
			l=mid+1;
			if(index==-1 || s[index]>=s[mid])
				index=mid;
		}
	}
	return index;
}

bool nextPermutation(string &s)
{
	int len=s.length();
	i=len-2;
	while(i>=0  && s[i]>=s[i+1])
		i--;
	if(i<0)
	{
		reverse(s,0,len);
		return false;
	}
	int index=leastUpperBound(s,i+1,len-1,s[i]);
	swap(&s[index],&s[i]);
	reverse(s,i+1,len-1);
	return true;
}

