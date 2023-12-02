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
int mDepth = 0;
    void func(TreeNode* root, int depth){
        if(root == NULL){
            return;
        }
        mDepth = max(mDepth, depth);
        func(root->left, depth+1);
        func(root->right, depth+1);
    }
    int maxDepth(TreeNode* root) {
        func(root, 1);
        return mDepth;
    }
};