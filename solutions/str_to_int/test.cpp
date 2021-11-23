#include<iostream>
#include<string>
using namespace std;
int get_int(string ss){
    int index = 0;
    int res = 0;
    int bdy = 2^31-1;
    while(ss[index] >= '0' && ss[index] <= '9'){
        res = res*10 + (ss[index]-'0');
        index++;
    }
    if(res > bdy) res = bdy;

    return res;
}

int main(){
    string s = "42";
    int res = 0;
    for(int i = 0; i<2; i++){
        res = res * 10 + (s[i] - '0');
        cout<<"result = "<<res<<endl;
    }

system("pause");
return 0;
}
