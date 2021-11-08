#include<iostream>
#include<vector>
using namespace std;
/**
 * Definition for singly-linked list.
 * */
 struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    
    ListNode* reverseList(ListNode* head) {
        vector <int> Nodeval;
        ListNode* newhead = head;
        while(newhead){
            Nodeval.emplace_back(newhead->val);
            newhead = newhead->next;
        }
        newhead = head;
        int size = Nodeval.size();
        for(int i = size-1; i>=0; i--){
            newhead->val = Nodeval[i];
            newhead = newhead->next; 
        }
        return head;
    }
};