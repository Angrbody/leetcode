#include<deque>
#include<iostream>
using namespace std;
//使用了和Min_stack相同的思想，维护了一个room非严格单调递减队列用于存储最大值
class MaxQueue {
private:
    deque<int> dq;
    deque<int> room;
public:
    MaxQueue() {}
    
    int max_value() {
        if(dq.empty()) return -1;
        return room.front();
    }
    
    void push_back(int value) {
        dq.emplace_back(value);
        while(!room.empty() && value>room.back()){
            room.pop_back();
        }
        room.emplace_back(value);
    }
    
    int pop_front() {
        if(dq.empty()) return -1;
        int tmp = dq.front();
        if(tmp == room.front()) room.pop_front();
        dq.pop_front();
        return tmp;
    }
};

/**
 * Your MaxQueue object will be instantiated and called as such:
 * MaxQueue* obj = new MaxQueue();
 * int param_1 = obj->max_value();
 * obj->push_back(value);
 * int param_3 = obj->pop_front();
 */