#include<iostream>
#include<stack>
using namespace std;
class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> stk;
    stack<int> Min_stk;
    MinStack() {
    }
    
    void push(int x) {
        stk.push(x);
        if(Min_stk.empty()){
            Min_stk.push(x);
        }
        else if(x<=Min_stk.top()){
            Min_stk.push(x);
        }
    }
    
    void pop() {
        if(Min_stk.top() == stk.top()){
            Min_stk.pop();
        }
        stk.pop();
            
    }
    
    int top() {
        return stk.top();
    }
    
    int min() {
        return Min_stk.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->min();
 */