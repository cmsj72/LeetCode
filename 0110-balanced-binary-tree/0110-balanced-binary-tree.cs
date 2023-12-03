/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     public int val;
 *     public TreeNode left;
 *     public TreeNode right;
 *     public TreeNode(int val=0, TreeNode left=null, TreeNode right=null) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
public class Solution {
    bool ans = true;
    int GetHeight(TreeNode root){
        if(root == null){
            return 0;
        }
        int leftSub = GetHeight(root.left);
        int rightSub = GetHeight(root.right);
        if(Math.Abs(leftSub - rightSub) > 1){
            ans = false;
        }
        return Math.Max(leftSub, rightSub) + 1;
    }
    public bool IsBalanced(TreeNode root) {
        GetHeight(root);
        return ans;
    }
}