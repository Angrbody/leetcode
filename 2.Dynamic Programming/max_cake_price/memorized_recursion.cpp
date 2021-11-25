#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution{
public:
    int maxCakePrice(int n){
        if(n<=1) return price_list[n];
        int f_n = 0, f_i = 0;
        vector<int> dp(n+1,0);
        
        for(int i = 0; i<n; i++){
            if(dp[i] != 0)  f_i = dp[i];
            else f_i = 0;
            f_n = max(f_n, maxCakePrice(n-i)+f_i);
        }
        return f_n;
    }
private:
    vector<int> price_list;  //单块蛋糕直接卖的价格列表
};