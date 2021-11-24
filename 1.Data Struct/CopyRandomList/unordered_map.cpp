#include<iostream>
#include<unordered_map>
using namespace std;
class Node {
public:
    int val;
    Node* next;
    Node* random;
    Node(int _val){
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution {
public:
    Node* copyRandomList(Node* head){
        if(head == nullptr){
            return nullptr;
        }
        std::unordered_map<Node* , Node*> Link_map;
        Node* p = head;
        while(p){
            Link_map[p] = new Node(p->val);
            p = p->next;
        }
        p = head;
        while(p){
            Link_map[p]->next = Link_map[p->next];           //此方法的精髓在于 很巧妙地利用unordered_map保存了原链表的顺序（p->next“隐式”存储）
            Link_map[p]->random = Link_map[p->random];
            p = p->next;
        }
        return Link_map[head];
    }
};