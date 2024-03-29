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
    TreeNode* searchBST(TreeNode* root, int val) {
        queue<TreeNode*> que;
        que.push(root);
        while(!que.empty()){
            TreeNode* tmp = que.front();
            que.pop();
            if(tmp->val == val){
                return tmp;
            }else if(tmp->val < val && tmp->right != NULL){
                que.push(tmp->right);
            }else if(tmp->val > val && tmp->left != NULL){
                que.push(tmp->left);
            }
        }
        return NULL;

        //  ==============================  //
        //  submission 제일 빠른 코드
        //  재귀를 이용한 방법은 해봤는데 return 처리를 제대로 못했서 실패했음
        // ios::sync_with_stdio(false);
        // cin.tie(0);
        // if(!root){
        //     return NULL;
        // }

        // if(root->val == val){
        //     return root;
        // }else if(root->val > val){
        //     return searchBST(root->left, val);
        // }else{
        //     return searchBST(root->right, val);
        // }
        // return NULL;
    }
};