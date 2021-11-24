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
        ListNode* cur = reverseList(head->next);    //将整个链表拆成两部分：已经倒转的和未倒转的
        head->next->next = head;            //反转操作
        head->next = NULL;                  //避免出现环路
        return cur;                         //该指针始终指向原链表的末尾，新链表的头部
    }
};