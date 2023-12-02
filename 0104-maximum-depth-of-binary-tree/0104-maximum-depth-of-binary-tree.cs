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
    int mDepth = 0;
    void func(TreeNode root, int depth){
        if(root == null) return;
        mDepth = Math.Max(mDepth, depth);
        func(root.left, depth+1);
        func(root.right, depth+1);
    }
    public int MaxDepth(TreeNode root) {
        func(root, 1);
        return mDepth;
    }
}