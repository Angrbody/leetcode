#include<iostream>
#include<string>
#include<algorithm>
#include"math.h"
using namespace std;
//finished
class  Solution {
public:
    static int strToInt(string str) {
    int index = 0, res = 0;
    int l = str.length();
    int sign = 1;   //默认符号位为正
    int bndry = INT_MAX/10;
    if(l == 0)  return 0;
    while(str[index] == ' '){
        index++;
        if(index == l) return 0;
    }
    if(str[index] == '-'){
        sign = -1;
    }
    if(str[index] == '+' || str[index] == '-'){
        index++;
    }

    for(int i = index; i<l; i++){
        if(str[i]<'0' || str[i]>'9'){
            break;
        }
        if(res > bndry || res == bndry && str[i]>'7'){
             return sign == 1? INT_MAX:INT_MIN;
        }
        res = res*10 + (str[i]-'0');
    }
    return res*sign;
    }
};

int main(){
    string test = "42";
    int res = Solution::strToInt(test);
    cout<<"res = "<<res<<endl;

    system("pause");
    return 0;
}