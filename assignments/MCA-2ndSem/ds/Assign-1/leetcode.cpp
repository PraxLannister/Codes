#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int size = nums.size();
        sort(nums.begin(),nums.end());
        int arr[size] ;
        for(int i = 0;i<size;i++)
            arr[i]=nums[i];
        cout<<"  "<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
        for(int i = 0,j = size -1;i<j;)
        {
            int sum = arr[i]+arr[j];
            
            if(sum ==  target){
                ans.push_back(i);
                cout<<arr[i]<<" ======";
                cout<<arr[j]<<" ======";           
                ans.push_back(j);
                break;
            }
            if (sum > target)
                j--;
            else 
                i++;          
            
        }
        return ans;
        
    }
}obj;


int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
    	
    	freopen("output.txt", "w", stdout);
	#endif
    std::vector<int> v;
    int n,temp,target;
    cin>>n;
    for(int i = 0;i<n;i++){
    	cin>>temp;
    	v.push_back(temp);
    }
    std::vector<int> ans;
    ans.resize(2);
    cin>>target;
    ans = obj.twoSum(v,target);
    for(int i  : ans)
    	cout<<i<<" ";
    return 0;
}