#include<iostream>
#include<vector>
#include<deque>
#include<algorithm>
using namespace std;
//我不理解
class Solution{
public:    
    vector<int> maxSlidingWindow(vector<int>& nums, int k){
        deque<int> dq;
        int lhs = 0, rhs = 0;
        vector<int> res;
        while (rhs < nums.size()) {
            while (dq.size() && nums[rhs] >= nums[dq.back()]) dq.pop_back();
            dq.push_back(rhs);
            if (rhs >= k) {
                lhs++;
                if (lhs > dq.front()) dq.pop_front();
            }
            if (rhs >= k - 1)
                res.push_back(nums[dq.front()]);
            
            rhs++;
        }
        return res;
    }
};