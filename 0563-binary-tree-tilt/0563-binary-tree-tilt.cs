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
    public int FindTilt(TreeNode root) {
        int tilt = 0;
        postOrder(root);
        return tilt;

        int postOrder(TreeNode root){
            if(root == null){
                return 0;
            }

            int left = postOrder(root.left);
            int right = postOrder(root.right);

            tilt += Math.Abs(left - right);
            return root.val + left + right;
        }
    }
}