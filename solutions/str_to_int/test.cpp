#include<iostream>
#include<string>
using namespace std;
int main() {

        string str = "-+1";
        int res = 0, index = 0, sign = 1;   //符号位默认为1（正）
        int bndry = 1000010;
        int l = str.size();
        if(l == 0)  return 0;
        while(str[index] == ' '){
            index++;
        }
        if(index == l)  return 0;
        if(str[index] == '-'){
            index++;
            sign = -1;
        }
        if(str[index] == '+'){
            index++;
        }
        if(abs(sign)!=1) return 0;
        for(int i = index; i<l; i++){
            if(str[i]<'0' || str[i]>'9')    break;
            if(res>bndry ||(res==bndry && str[i]>'7')){
                return sign == 1 ? 1000000:100000;
            }
            res = res * 10 + (str[i] - '0');
            cout<<"computing... , res = "<<res<<endl;
        }
        cout<<"index = "<<index<<endl;
        cout<<"length = "<<l<<endl;
        cout<<"res = "<<res<<endl;

    
    system("pause");
    return 0;
    
};