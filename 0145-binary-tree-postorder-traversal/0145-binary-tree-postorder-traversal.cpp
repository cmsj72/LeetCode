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
    vector<int> postorderTraversal(TreeNode* root) {
        if(root == NULL){
            return {};
        }
        vector<int> ans;
        if(root->left != NULL){
            vector<int> left = postorderTraversal(root->left);
            ans.insert(ans.end(), left.begin(), left.end());
        }
        if(root->right != NULL){
            vector<int> right = postorderTraversal(root->right);
            ans.insert(ans.end(), right.begin(), right.end());
        }
        ans.push_back(root->val);
        return ans;
    }
};