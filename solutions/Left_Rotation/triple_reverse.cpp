#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
//巧妙的三次翻转
class Solution{
public:
    static string reverseLeftWords (string s, int n){
        reverse(s.begin(),s.begin()+n);
        reverse(s.begin()+n,s.end());
        reverse(s.begin(),s.end());

        return s;
    }
};