/*
虽然暴力递归的思想很好理解，但是时间复杂度为o(2^n)
在递归中包含了很多重复的操作
例如：在测试时输入n=43，则超出最大处理时间
*/
#include<iostream>
using namespace std;
class Solution{
public:
    static int fib(int n){
        if(n == 0) return 0;
        if(n == 1) return 1;
        if(n > 1)  return fib(n-1) + fib(n-2);
        return 0;
    }
};