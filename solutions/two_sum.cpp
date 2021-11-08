#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
class Solution{
public:
    vector<int> twoSum(vector<int>& nums, int target){
        int size = nums.size();
        unordered_map<int , int> map;
        for(int i = 0; i< size ; i++){
           
            if(map.find(target - nums[i] )!= map.end()){
                return {map[target - nums[i]],i};
            }
             map.emplace(nums[i],i);
        }
        return{};
    }
};
