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
    void InOrder(TreeNode root, List<int> list){
        if(root == null){
            return;
        }
        InOrder(root.left, list);
        list.Add(root.val);
        InOrder(root.right, list);
    }
    public bool FindTarget(TreeNode root, int k) {
        List<int> list = new();
        InOrder(root, list);
        int left = 0;
        int right = list.Count - 1;
        while(left < right){
            int sum = list[left] + list[right];
            if(sum == k){
                return true;
            }else if(sum < k){
                left++;
            }else if(sum > k){
                right--;
            }
        }
        return false;
    }
}