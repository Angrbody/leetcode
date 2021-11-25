#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution{
public:
    int maxCakePrice(int n){
        if(n<=1) return n;
        int f_n = 0;
        for(int i = 0; i<n; i++){
            f_n = max(f_n, maxCakePrice(n-i)+maxCakePrice(i));
        }
        return f_n
    }
private:
    vector<int> price_list;  //单块蛋糕直接卖的价格列表
};