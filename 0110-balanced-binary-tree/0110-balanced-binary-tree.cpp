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
    bool ans = true;
    int solve(TreeNode* root){
        //  https://leetcode.com/problems/balanced-binary-tree/solutions/3093444/java-c-100-solution-using-depth-first-search-balanced-binary-tree/
        //  말단 노드일 때 0 반환
        if(root == NULL){
            return 0;
        }
        //  왼쪽 서브트리 높이 구하기
        int left = solve(root->left);
        //  오른쪽 서브트리 높이 구하기
        int right = solve(root->right);
        //  높이의 차이가 1보다 크면 ans = false
        if(abs(left-right)>1){
            ans = false;
        }
        //  왼쪽과 오른쪽 서브트리 중에 높은 서브트리의 높이에 1을 더해서 반환
        //  즉 말단 노드부터 높이를 더해가는 방식
        //  높이는 제일 긴걸로 사용하기 때문
        return max(left,right)+1;
    }
    bool isBalanced(TreeNode* root) {
        solve(root);
        return ans;
    }
    // int func(TreeNode* root, int depth){
    //     if(root == NULL){
    //         return depth;
    //     }
    //     depth++;
    //     if((root->left == NULL && root->right != NULL) || (root->left != NULL && root->right == NULL)){
    //         return -1;
    //     }
    //     return max(func(root->left, depth), func(root->right, depth)); 
    // }

    // bool isBalanced(TreeNode* root) {
    //     if(root == NULL){
    //         return true;
    //     }
    //     int left = func(root->left, 0);
    //     int right = func(root->right, 0);
    //     if(left == -1 || right == -1){
    //         return false;
    //     }
    //     if(left - right > 1 || right - left > 1){
    //         return false;
    //     }else{
    //         return true;
    //     }
    // }
};