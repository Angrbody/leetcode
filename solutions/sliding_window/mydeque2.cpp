#include<iostream>
#include<vector>
#include<deque>
#include<algorithm>
using namespace std;
//利用deque容器来构造单向非严格数组，实现o(1)的时间复杂度
class Solution{
public:    
    vector<int> maxSlidingWindow(vector<int>& nums, int k){
        deque<int> dq;
        int L = 1-k, R = 0, n = nums.size();
        vector<int> res;
        if(nums.empty() || k == 0) return res;
        //形成窗口前
        for(int i = 0; i<k; i++){
            while(!dq.empty() && dq.back()<nums[i]){
                dq.pop_back();
            }
            dq.push_back(nums[i]);
        }
        res.push_back(dq[0]);
        
        //长度为k的窗口开始移动
        for(int i = k; i<n; i++){
            if(nums[i-k] == dq[0]){         //若要删除的元素等于当前dq中存储的最大值，则将dq[0]一并删除
                dq.pop_front();
            }
            while(!dq.empty() && nums[i]>dq.back()){    //删除dq中所有小于当前RIGHT所指处的元素
                dq.pop_back();
            }
            dq.push_back(nums[i]);
            res.push_back(dq[0]);
        }
        
        return res;
    }
};