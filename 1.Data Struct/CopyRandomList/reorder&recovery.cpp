#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == nullptr) return nullptr;
        Node* cur = head;
        Node* pre = head;
        //拼接
        while(cur){
            Node* myNode = new Node(cur->val);
            myNode->next = cur->next;
            cur->next = myNode;
            cur = myNode->next;
        }
        cur = head;
        //给新节点赋random值
        while(cur){
            if(cur->random){
                cur->next->random = cur->random->next;//WHY??
            }
            cur = cur->next->next;
        }
        cur = head->next;
        Node* res = cur;
        //拆解
        while(cur->next){
            // pre->next = cur->next;
            // pre = pre->next;
            // cur->next = pre->next;
            // cur = cur->next;
            pre->next = pre->next->next;
            cur->next = cur->next->next;
            pre = pre->next;
            cur = cur->next;
        }
        pre ->next = nullptr;
        return res;

    }
};