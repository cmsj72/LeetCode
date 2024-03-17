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
    public IList<double> AverageOfLevels(TreeNode root) {
        //  앞 c++에서 본 솔루션 방법
        List<double> ans = new();
        Queue<TreeNode> q = new();
        q.Enqueue(root);
        q.Enqueue(null);
        long sum = 0, count = 0;
        while(q.Count > 0){
            TreeNode cur = q.Peek();
            q.Dequeue();
            if(cur == null){
                ans.Add((double)sum/count);
                sum = 0; count = 0;
                q.Enqueue(null);
                if(q.Peek() == null)break;
            }else{
                count++;
                sum += cur.val;
                if(cur.left != null) q.Enqueue(cur.left);
                if(cur.right != null) q.Enqueue(cur.right);
            }
        }
        return ans;
        //  ==============================  //
        //  https://leetcode.com/problems/average-of-levels-in-binary-tree/solutions/2516772/c-bfs-level-order-traversal
        //  같은 BFS지만 레벨 확인하는 방법약간 다름
    }
}