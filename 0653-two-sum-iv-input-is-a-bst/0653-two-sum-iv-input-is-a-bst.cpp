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
unordered_set<int> st;
    bool findTarget(TreeNode* root, int k) {
        if(root == NULL){
            return false;
        }
        auto pt = st.find(k - root->val);
        if(pt != st.end()){
            return true;
        }else{
            st.insert(root->val);
        }
        return findTarget(root->left, k) || findTarget(root->right, k);
    }

    //  ==============================  //
    //  submission에서 제일 빠른 시간의 코드
    // void storeInorder(TreeNode*root,vector<int> &inorder){
    //     //base case
    //     if(root==NULL){
    //         return;
    //     }
    //     //LNR
    //     storeInorder(root->left,inorder);
    //     //N
    //     inorder.push_back(root->val);
    //     //R
    //     storeInorder(root->right,inorder);
    // }
    // bool findTarget(TreeNode* root,int k){
    //     vector<int>inorder;
    //     storeInorder(root,inorder);
    //     //find targetnusing 2 pointer approach
    //     int start=0;
    //     int end=inorder.size()-1;
    //     while(start<end){
    //         int sum=inorder[start]+inorder[end];
    //         if(sum==k){
    //             return true;
    //         }
    //         else if(sum>k){
    //             end--;
    //         }
    //         else if(sum<k){
    //             start++;
    //         }
    //     }
    //     return false;
    // }
};