#include<iostream>
#include<vector>
#include<deque>
#include<algorithm>
using namespace std;
//failed version
class Solution{
public:    
    vector<int> maxSlidingWindow(vector<int>& nums, int k){
        vector<int> res;
        vector<int> win;
        int size = nums.size();
        deque<int> d;
        if(nums.empty() || k ==0) return {};
        while(win.size()<k){
            int i = 0;
            win.emplace_back(nums[i]);
            i++
        }
        d[0] = win[0];
        for(int i = 0; i<size-k+1; i++){
            for(int j = 0; j<k; j++){
                if(find(win.begin(),win.end(),d[0]) == win.(end))
                    d.pop_front();
                else if(win[j] >= d[0])
                    d.push_front(win[j]);
                else
                    d.push_front(win[j]);
            }
            win.erase(win.begin());
            win.emplace_back(nums[i+k]);
            res.emplace_back(d[0]);
        }

        return res;
    }
};