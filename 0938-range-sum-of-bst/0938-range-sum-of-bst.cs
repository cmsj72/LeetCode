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
    public int RangeSumBST(TreeNode root, int low, int high) {
        //  https://leetcode.com/problems/range-sum-of-bst/solutions/4525606/99-43-easy-solution-with-explanation
        if(root == null){
            return 0;
        }

        int currentVal = (low <= root.val && root.val <= high) ? root.val : 0;

        int leftSum = RangeSumBST(root.left, low, high);
        int rightSum = RangeSumBST(root.right, low, high);

        return currentVal + leftSum + rightSum;
    }
}