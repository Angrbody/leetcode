#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int maxCakePrice(int n, vector<int> price_list)
{
    if(n<=1) return price_list[n];
    int f_n = 0;
    for(int i = 0; i<n; i++)
    {
        f_n = max(f_n, price_list[n-i]+maxCakePrice(i, price_list));
    }
    return f_n;
}


int main(){
    vector<int> price_list;  //单块蛋糕直接卖的价格列表
    price_list = {0,1,3,6,7,11,15};
    int n = 10;
    int res = maxCakePrice(n, price_list);
    cout<<n<<endl<<res<<endl;

    system("pause");
    return 0;
}