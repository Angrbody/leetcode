#include<iostream>
#include<string>
using namespace std;
class Solution{
public:
    static string reverseLeftWords (string s, int n){
        int size = s.size();
        string left = s.substr(0,n);
        string right = s.substr(n,size-n);
        return right+left;
    }
};