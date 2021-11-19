#include<iostream>
#include<unordered_map>
#include<string>
#include<vector>
using namespace std;
//意在使用一个非string的容器来保存。这种方法为什么会报错？
class Solution{
public:
    static string reverseLeftWords (string s, int n){
        int size = s.size();
        string res;
        char tmp[size];
        for(int i = 0; i<size-n; i++){
            tmp[i] = s[i+n];
        }
        for(int i = 0; i<n; i++){
            tmp[size-n+i] = s[i];
        }
        for(int i = 0; i<size; i++){
            res[i] = tmp[i];
        }
        return res;
    }
};
