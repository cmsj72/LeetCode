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
int ans;
    void func(TreeNode* root, int depth){
        if(!root->left && !root->right){
            ans = ans > 0 ? min(ans, depth) : max(ans, depth);
        }
        if(root->left){
            func(root->left, depth+1);
        }
        if(root->right){
            func(root->right, depth+1);
        }
    }
    int minDepth(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        func(root, 1);
        return ans;
    }
};