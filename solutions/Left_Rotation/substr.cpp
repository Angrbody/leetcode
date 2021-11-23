#include<iostream>
#include<string>
using namespace std;

//拆成两段子字符串，其实也挺占空间的
class Solution{
public:
    static string reverseLeftWords (string s, int n){
        int size = s.size();
        string left = s.substr(0,n);
        string right = s.substr(n,size-n);
        return right+left;
    }
};

//这是一种很占空间（2*n）但是比较巧妙的解决办法，不如取余
class Solution2{    
public:
    static string reverseLeftWords(string s, int n){
        return (s+s).substr(n,s.size());
    }
};