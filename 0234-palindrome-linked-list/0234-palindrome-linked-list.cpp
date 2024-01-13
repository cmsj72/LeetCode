/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        deque<int> dq;
        while(head){
            dq.push_back(head->val);
            head = head->next;
        }
        
        while(!dq.empty()){
            if(dq.size() == 1) break;
            if(dq.front() != dq.back()) return false;
            dq.pop_front();
            dq.pop_back();
        }
        return true;
    }
};