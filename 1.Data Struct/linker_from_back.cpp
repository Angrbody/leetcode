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
    vector<int> reversePrint(ListNode* head) {
        std::stack<int> stk;
        while(head != NULL){
            stk.push(head->val);
            head = head->next;
        }

        vector<int> res;
        while(!stk.empty()){
            res.emplace_back(stk.top());
            stk.pop();
        }    
        return res;
    }
};