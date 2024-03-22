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
priority_queue<int, vector<int>, greater<int>> pq;
unordered_set<int> st;
    void func(TreeNode* root){
        if(!root){
            return;
        }
        if(st.find(root->val) == st.end()){
            st.insert(root->val);
            pq.push(root->val);
        }
        func(root->left);
        func(root->right);
    }
    int findSecondMinimumValue(TreeNode* root) {
        func(root);
        if(pq.size() < 2){
            return -1;
        }else{
            pq.pop();
            return pq.top();
        }
        //  생각해보니까 우선순위큐 안쓰고 그냥 정렬된 set으로 해도 되네;
    }
    //  ==============================  //
    //  https://leetcode.com/problems/second-minimum-node-in-a-binary-tree/solutions/3391310/without-set-dfs-c-o-n
    // long long secondMin = LONG_MAX, firstMin;
    // void findSecMin(TreeNode* root){
    //     if(!root) return;
    //     if(root->val > firstMin){
    //         if(root-> val <= secondMin)
    //             secondMin = root->val;
    //     }
    //     find(root->left);
    //     find(root->right);
    // }

    // int findSecondMinimumValue(TreeNode* root) {
    //     firstMin = root->val;
    //     findSecMin(root);
    //     if(secondMin == LONG_MAX) return -1;
    //     return secondMin;
    // }
};