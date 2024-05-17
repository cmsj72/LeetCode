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
    // void InOrder(TreeNode* root, vector<TreeNode*>& vec){
    //     if(root == NULL){
    //         return;
    //     }
    //     if(root->left != NULL){
    //         InOrder(root->left, vec);
    //     }
    //     vec.push_back(root);
    //     if(root->right!= NULL){
    //         InOrder(root->right, vec);
    //     }
    // }

    // TreeNode* increasingBST(TreeNode* root) {
    //     vector<TreeNode*> vec;
    //     InOrder(root, vec);
    //     for(int i = 0; i < vec.size(); i++){
    //         cout << vec[i]->val << endl;
    //     }
    //     TreeNode* ans = vec[0];
    //     TreeNode* tmp = ans;
    //     for(int i = 1; i < vec.size(); i++){
    //         tmp->left = NULL;
    //         tmp->right = vec[i];
    //         if(tmp->right) tmp = tmp->right;
    //     }
    //     return ans;        
    // }

    //  ==============================  //
    //  https://leetcode.com/problems/increasing-order-search-tree/solutions/1618344/easy-solution-100-faster-c-inorder-traversal
    //  차이점 : vector에 TreeNode* 가 아닌 val 값만 저장,
    //  반환할 때 val을 넘겨서 newTreeNode(~) 형식으로 노드를 새로 생성
    void inorder(TreeNode* root,vector<int>&v)
    {
        if(!root)
            return;
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }
    TreeNode* increasingBST(TreeNode* root)
    {
        vector<int>v;
        inorder(root,v);
        TreeNode*temp=new TreeNode(v[0]);
        TreeNode* r=temp;
        for(int i=1;i<v.size();i++)
        {
            temp->right=new TreeNode(v[i]);
            temp=temp->right;
        }
        return r;
    }
};