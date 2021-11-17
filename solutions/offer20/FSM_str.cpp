#include<iostream>
#include<unordered_map>
using namespace std;
class Solution{
    private:
    /*
    定义FSM的几类状态跳转
    五种字符类型：
    ' ': blank
    'd': digit
    's': sign
    'e': exp
    '.': float
    */
    unordered_map<char, int> status[9]{
        {{'d', 2}, {'.', 4}, {'s', 1}, {' ', 0}},   // status 0
        {{'d', 2}, {'.', 4}},                       // status 1
        {{'e', 5}, {'d', 2}, {'.', 3}, {' ', 8}},   // status 2
        {{'d', 3}, {'e', 5}, {' ', 8}},             // status 3
        {{'d', 3}},                                 // status 4
        {{'d', 7}, {'s', 6}},                       // 5
        {{'d', 7}},                                 // 6
        {{'d', 7}, {' ', 8}},                       // 7
        {{' ', 8}}                                  // 8
    };
    public:
    bool isNumber(string s) {
        int p = 0;  //设置初始状态为0
        char t;   //记录字符
        for(auto c : s ){
            if(c >='0' && c <='9')  t = 'd';
            else if(c =='e' || c =='E')  t = 'e';
            else if(c =='+' || c =='-')  t = 's';
            else if(c =='.' || c ==' ')  t = c;
            else t = '?';
            auto it = status[p].find(t);
            if(it == status[p].end())
            return false;

            p = (int)it->second;

        }
        if(p==2 || p==3 || p==7 || p==8)
        return true;
        else
        return false;
        //这里等效于 return p==2 || p==3 || p==7 || p==8;
    }   
};
