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
    int count = 0;
    int size = 0;
    vector<int> node_val;
    node_val.max_size = 5000;
    ListNode* reverseList(ListNode* head) {
        ListNode* phead;
        if(head->next == NULL){return head;}
        while(head!= NULL)
       {
           count ++;
           node_val.emplace_back(head->next->val);
           head = head->next;
       } 
        size = node_val.size();
        for(int i = size; i>0; i--)
        {
            ListNode node(node_val[i],NULL);
            phead ->next = node;
            phead = node;
            
        }
        for(int j = 0; j<size; j++)
        {
            std::cout<<phead->val<<std::endl;
            phead = phead->next;
        }
       
    }
};