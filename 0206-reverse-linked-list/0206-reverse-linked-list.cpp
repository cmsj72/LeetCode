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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL) return NULL;
        vector<ListNode*> vec;
        ListNode* ans;
        ListNode* pt;
        while(head){
            vec.push_back(head);
            head = head->next;
        }
        ans = vec[vec.size() - 1];
        for(int i = vec.size() - 1; i >= 0; i--){
            vec[i]->next = (i == 0) ? NULL : vec[i-1]; 
        }
        return ans;
    }
};