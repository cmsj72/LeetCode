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
    public bool LeafSimilar(TreeNode root1, TreeNode root2) {
        //  https://leetcode.com/problems/leaf-similar-trees/solutions/4531517/99-39-easy-solution-with-explanation
        List<int> leafValues1 = new List<int>();
        List<int> leafValues2 = new List<int>();
        CollectLeafValues(root1, leafValues1);
        CollectLeafValues(root2, leafValues2);

        //  https://learn.microsoft.com/ko-kr/dotnet/api/system.linq.enumerable.sequenceequal?view=net-8.0
        return Enumerable.SequenceEqual(leafValues1, leafValues2);

        void CollectLeafValues(TreeNode root, List<int> leafValues){
            if(root == null){
                return;
            }
            if(root.left == null && root.right == null){
                leafValues.Add(root.val);
            }
            CollectLeafValues(root.left, leafValues);
            CollectLeafValues(root.right, leafValues);
        }
    }
}