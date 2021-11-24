#include<iostream>
#include<vector>
using namespace std;
class solution{
public:
    static int fibonacci(int n){
        if(n == 0) return 0;
        if(n == 1) return 1;
        if(n > 1)  return fibonacci(n-1) + fibonacci(n-2);
    }
};
int main(){
    int n = 3;
    int res = solution::fibonacci(n);
    cout<<res<<endl;

    system("pause");
    return 0;
}