#include<iostream>
#include<unordered_map>
#include<vector>
#include<stack>
using namespace std;
struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head || !head->next){
            return head;
        }
        ListNode* cur = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return cur;
    }
};