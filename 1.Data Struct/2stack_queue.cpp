#include<iostream>
#include<unordered_map>
#include<vector>
#include<stack>
using namespace std;
class CQueue {
public:
    stack<int> A,B;
    CQueue() {} 
    void appendTail(int value) {
        A.push(value);
    }
    int deleteHead() {
        if(!B.empty()){
            int res = B.top();
            B.pop();
            return res;
        }
        else if(! A.empty()){
            while(! A.empty()){
                B.push(A.top());
                A.pop();
            }
            int res = B.top();
            B.pop();
            return res;
        }
        else
        return -1;
    }
};