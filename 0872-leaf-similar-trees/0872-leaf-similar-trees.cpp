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
    void func(TreeNode* root, vector<int>& vec){
        if(root->left){
            func(root->left, vec);
        }
        if(root->right){
            func(root->right, vec);
        }
        if(root->left == NULL && root->right == NULL){
            vec.push_back(root->val);
        }

    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> vec1, vec2;
        func(root1, vec1);
        func(root2, vec2);
        return vec1 == vec2;
    }
};