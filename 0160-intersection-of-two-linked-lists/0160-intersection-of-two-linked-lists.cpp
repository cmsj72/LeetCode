/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> table;
        ListNode* tmp = headA;
        while(tmp){
            table.insert(tmp);
            tmp = tmp->next;
        }
        tmp = headB;
        while(tmp){
            if(table.find(tmp) != table.end()){
                return tmp;
            }else{
                tmp = tmp->next;
            }
        }
        return NULL;
    }
};