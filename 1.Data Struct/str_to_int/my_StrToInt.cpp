#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    int strToInt(string str) {
        int res = 0, index = 0, sign = 1;   //符号位默认为1（正）
        int bndry = INT_MAX/10;
        int l = str.size();
        if(l == 0)  return 0;
        while(str[index] == ' '){
            index++;
        }
        if(index == l)  return 0;
        if(str[index] == '-'){
            sign = -1;
        }
        //这里的符号判断要注意连续符号的情况，严格控制index使其定位到第一个非空格的地方
        if(str[index] == '-' || str[index] == '+'){     
            index++;
        }
        for(int i = index; i<l; i++){
            if(str[i]<'0' || str[i]>'9')    break;
            if(res>bndry ||(res==bndry && str[i]>'7')){
                return sign == 1 ? INT_MAX:INT_MIN;     //这个判断的位置需要注意，是在越位的前一步运算时进行判断，以确定最后一次循环会不会越位
            }
            res = res * 10 + (str[i] - '0');
        }
    return res*sign;
    }
};