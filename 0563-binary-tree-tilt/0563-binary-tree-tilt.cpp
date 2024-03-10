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
int ans = 0;
    int func(TreeNode* root){
        if(root == NULL){
            return 0;
        }
        int leftVal = func(root->left);
        int rightVal = func(root->right);
        ans += abs(leftVal - rightVal);        
        return root->val + leftVal + rightVal;
    }
    int findTilt(TreeNode* root) {
        int n = func(root);
        return ans;
    }
};