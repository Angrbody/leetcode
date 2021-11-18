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
        if(head == NULL) return NULL;
        std::unordered_map <Node*, Node*> complex_map;
        Node* p = head;
        while(p){
            complex_map[p] = new Node(p->val);
            p = p->next;
        }
        
        p = head;

        while(p){
            complex_map[p]->next = complex_map[p->next];
            complex_map[p]->random = complex_map[p->random];
            p = p->next;
        }
        return complex_map[head];
    }
};