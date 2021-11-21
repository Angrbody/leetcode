#include<iostream>
#include<vector>
#include<deque>
using namespace std;
//failed version
class Solution{
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if(nums.empty() || k == 0){
            return {};
        }
        deque<int> slide_win;       //维护的窗口
        vector<int> res;    //存放每个窗口最大值
        int max = 0;
        int size = nums.size();
        
        //窗口初始化到前k个元素
        while(slide_win.size()<k){  
            int tmp = 0;
            slide_win.emplace_back(nums[tmp]);
            tmp++;
        }
        max = slide_win[0];
        //对窗口进行操作
        for(int i = 0; i<size-k+1; i++){
            for(int j = 0; j<k; j++){
                if(max <= slide_win[j]){
                    max = slide_win[j];
                }
            }
            res.emplace_back(max);
            slide_win.emplace_back(nums[k+i]);
            slide_win.pop_front();
            
        }
        return res;
    }
};