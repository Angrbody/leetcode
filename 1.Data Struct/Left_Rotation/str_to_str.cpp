#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

//因C++中string为可变的，即可以直接操作字符串，而不用重新为string建立空间
class Solution{
public:
   static string reverseLeftWords (string s, int n){
        string res;
        int size = s.length();
        for(int i = n; i < size; i++){
            res.push_back(s[i]);
        }

        for(int j = 0; j < n; j++){
            res.push_back(s[j]);
        }
        return res;
    }
};