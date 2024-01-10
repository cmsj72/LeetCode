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
    public TreeNode InvertTree(TreeNode root) {
        //  https://leetcode.com/problems/invert-binary-tree/solutions/1823129/c-solution-bfs-iterative-dfs-recursive-fast-simple-intuitive
        //  BFS 이용한 방법
        if(root == null){
            return null;
        }

        var queue = new Queue<TreeNode>();
        queue.Enqueue(root);

        while(queue.Count != 0){
            TreeNode current = queue.Dequeue();
            TreeNode tempLeft = current.left;

            current.left = current.right;
            current.right = tempLeft;

            if(current.left != null){
                queue.Enqueue(current.left);
            }

            if(current.right != null){
                queue.Enqueue(current.right);
            }
        }

        return root;
    }
}