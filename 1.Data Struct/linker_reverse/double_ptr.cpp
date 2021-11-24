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
        ListNode* thisNode = head;
        ListNode* pre = NULL;
        while(thisNode){
            ListNode* tmp = thisNode->next;
            thisNode->next = pre;
            pre = thisNode;
            thisNode = tmp;
        }

        return pre;
    }
        
};