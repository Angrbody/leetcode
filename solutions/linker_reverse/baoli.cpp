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
       ListNode res = NULL;
       for(ListNode* x = head; x!= NULL; x = x->next){
           ListNode res = new ListNode* (x->val,x->next);
       }
    }



};