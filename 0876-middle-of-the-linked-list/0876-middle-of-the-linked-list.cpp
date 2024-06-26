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
    ListNode* middleNode(ListNode* head) {
        vector<ListNode*> vec;
        while(head != NULL){
            vec.push_back(head);
            head = head->next;
        }
        return vec.size() % 2 == 1 ? vec[(vec.size() - 1) / 2] : vec[(vec.size() - 1) / 2 + 1];
    }
};