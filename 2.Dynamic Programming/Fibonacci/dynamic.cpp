#include<iostream>
#include<vector>
using namespace std;
// 1.用额外的空间n来存储每一步计算的结果，空间复杂度为o(n)
class Solution{
public:
    static int fib(int n){
        vector<int> dp(n+1,0);
        dp[1] = 1;
        for(int i = 2; i<n+1; i++){
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
    }
};

//2.仅使用两个变量来交替存储计算的结果，空间复杂度为o(1)
class Solution2{
public:
    static int fib(int n){
        if(n == 0) return 0;
        if(n == 1) return 1;
        int a = 0, b = 1;
        for(int i = 2; i<=n; i++){
            int tmp = a;
            a = b;
            b = (a + tmp)% 1000000007; //???
        }
        return b;
    }
};