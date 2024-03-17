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
    vector<vector<double>> vec;
    vector<double> ans;
    void func(TreeNode* root, int level){
        if(root == NULL)
            return;
        if(vec.size() < level){
            vector<double> tmp;
            vec.push_back(tmp);
        }
        vec[level - 1].push_back(root->val);
        func(root->left, level+1);
        func(root->right, level+1);
    }
    vector<double> averageOfLevels(TreeNode* root) {
        func(root, 1);
        for(int i = 0; i < vec.size(); i++){
            double sum = 0;
            for(int j = 0; j < vec[i].size(); j++){
                sum += vec[i][j];
            }
            ans.push_back(sum / vec[i].size());
        }
        return ans;
    }
    
    //  ==============================  //
    //  https://leetcode.com/problems/average-of-levels-in-binary-tree/solutions/2517018/two-simple-ways-to-do-dfs-and-bfs-c

    //  BFS
    // vector<double> averageOfLevels(TreeNode* root) {
    //     vector<double> ans;
    //     queue<TreeNode*> q;
    //     q.push(root);
    //     q.push(NULL);
    //     long long sum = 0, count = 0;
    //     while(q.size()){
    //         TreeNode* cur = q.front();
    //         q.pop();
    //         if(!cur){
    //             ans.push_back((double)sum/count);
    //             sum = 0, count = 0;
    //             q.push(NULL);
    //             if(!q.front()) break;
    //         }
    //         else{
    //             count++;
    //             sum += cur->val;
    //             if(cur->left)q.push(cur->left);
    //             if(cur->right)q.push(cur->right);
    //         }
    //     }
    //     return ans;
    // }
};