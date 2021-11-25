#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution{
public:
    int maxCakePrice(int n){
        if(n<=1) return price_list[n];
        vector<int> dp(n+1,0);
        for(int j = 2; j<=n; j++){
            for(int i = 0; i<j; i++){
                dp[j] = max(dp[j],dp[j-i]+price_list[i]);
            }

        }
        return dp[n];
    }
private:
    vector<int> price_list;  //单块蛋糕直接卖的价格列表
};