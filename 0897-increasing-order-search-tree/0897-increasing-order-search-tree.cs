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
    //  https://leetcode.com/problems/increasing-order-search-tree/solutions/4752932/easy-c-in-order-traversal-solution
    public TreeNode IncreasingBST(TreeNode root) {
        List<int> vals = new();
        Traverse(root, vals);

        //  https://learn.microsoft.com/ko-kr/dotnet/api/system.linq.enumerable.first?view=net-8.0
        var newRoot = new TreeNode(vals.First());
        var temp = newRoot;
        //  https://learn.microsoft.com/ko-kr/dotnet/api/system.linq.enumerable.skip?view=net-8.0
        foreach(var val in vals.Skip(1)){
            temp.right = new TreeNode(val);
            temp = temp.right;
        }
        return newRoot;
    }

    void Traverse(TreeNode root, List<int> vals){
        if(root == null) return;

        Traverse(root.left, vals);
        vals.Add(root.val);
        Traverse(root.right, vals);
    }
}