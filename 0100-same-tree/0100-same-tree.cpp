/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        //  p 와 q 둘다 NULL이면 없는 노드이기 때문에 true        
        if(p == NULL && q == NULL) return true;

        //  p 와 q 둘다 없는 조건은 위에서 걸리기 때문에 여기서는 둘 중 하나라도 없는 상태만 걸려서 
        //  다른 트리 이므로 false
        //  둘다 있으면 아래로 진행
        if(p == NULL || q == NULL) return false;

        //  현재 노드의 값이 같은 경우 재귀를 이용해 재귀를 계속 진행
        //  왼쪽과 오른쪽 주소를 넘겨줌
        //  현재 노드의 값이 다른 경우 아래로 진행하여 false를 반환
        if(p->val == q-> val){
            return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        }
        return false;
    }
};