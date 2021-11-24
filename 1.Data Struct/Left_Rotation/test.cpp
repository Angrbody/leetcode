#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
int main(){
    string s = "lrloseumgh";
    int k = 6;
    int size = s.length();
    // string left = s.substr(0,k);
    // string right = s.substr(k,size-k);
    // string res = right+left;
    // cout<<res;
    string res;
        for(int i = k; i < size; i++){
            res.push_back(s[i]);
        }

        for(int j = 0; j < k; j++){
            res.push_back(s[j]);
        }
        cout<<res;
    
    system("pause");
    return 0;

}