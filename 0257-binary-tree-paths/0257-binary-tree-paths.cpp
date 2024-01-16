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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        if(root->left != NULL){
            vector<string> left = binaryTreePaths(root->left);
            for(int i = 0; i < left.size(); i++){
                string tmp = to_string(root->val);
                tmp += "->" + left[i];
                ans.push_back(tmp);
            }
        }
        if(root->right != NULL){
            vector<string> right = binaryTreePaths(root->right);
            for(int i = 0; i < right.size(); i++){
                string tmp = to_string(root->val);
                tmp += "->" + right[i];
                ans.push_back(tmp);
            }
        }
        if(ans.size() == 0){
            ans.push_back(to_string(root->val));
        }
        return ans;
    }
};