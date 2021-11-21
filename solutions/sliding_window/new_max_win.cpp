#include<iostream>
#include<vector>
using namespace std;
//这种方法最占用时间复杂度的地方为
//每次找最大值时都需要遍历一遍长度为k的窗口
//这是暴力解法需要解决的问题
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if(nums.empty() || k == 0){
            return {};
        }
        vector<int> res;
        vector<int> win;
        int t = 0;
        int size = nums.size();
        while(win.size()<k){
            win.emplace_back(nums[t]);
            t++;
        }
        int max = win[0];
        for(int i = 0; i<k; i++)
        {
            if(max <= win[i])   max = win[i];
        }
        res.emplace_back(max);
        vector<int>::iterator it = win.begin();
        for(int i = 0; i<size-k; i++)
        {
            win.erase(it);
            win.emplace_back(nums[i+k]);
            max = win[0];
            for(int i = 0; i<k; i++)
            {
                if(max <= win[i])   max = win[i];
            }
            res.emplace_back(max);
        }
        return res;
    }
};