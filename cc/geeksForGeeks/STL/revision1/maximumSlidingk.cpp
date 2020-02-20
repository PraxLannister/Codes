#include<iostream>
#include<deque>
#include <vector>
using namespace std;

vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq(k);
        vector<int> ans;
        int n = nums.size();
        for(int i=0;i<k;i++)
        {
            while(!dq.empty() && nums[i]>=nums[dq.back()])
                dq.pop_back();
            dq.push_back(i);
        }
        ans.push_back(nums[dq.front()]);
        for(int i=k;i<n;i++)
        {
            int num = nums[i];
            while(!dq.empty() && nums[i]>=nums[dq.back()])
                dq.pop_back();
            if(!dq.empty() && dq.front()<=i-k)
                dq.pop_front();
            dq.push_back(i);
            ans.push_back(nums[dq.front()]);
            
        }
    //    ans.push_back(nums[dq.front()]);
        return ans;
    
    }

    int main()
    {
        #ifndef ONLINE_JUDGE
            
            freopen("input.txt", "r", stdin);
            
            freopen("output.txt", "w", stdout);
        #endif
    
    
        int n,k;
        cin>>n>>k;
        vector<int> nums;
        for (int i = 0; i < n; ++i)
        {
            int temp;
            cin>>temp;
            nums.push_back(temp);
        }
        vector<int> ans = maxSlidingWindow(nums,k);
        for(int n : ans)
            cout<<n<<" ";
    
    return 0;
    }