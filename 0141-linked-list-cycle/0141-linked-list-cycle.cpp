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
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode*> tmp;
        ListNode *pt = head;
        if(pt == NULL){
            return false;
        }
        while(true){
            if(tmp.find(pt) != tmp.end()){
                return true;
            }else{
                tmp.insert(pt);
            }
            if(pt->next == NULL){
                return false;
            }
            pt = pt->next;
        }
        return false;
    }
};