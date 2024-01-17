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
    public IList<string> BinaryTreePaths(TreeNode root) {
        //  https://leetcode.com/problems/binary-tree-paths/solutions/3013848/using-reccursive-approach
        List<string> paths = new List<string>();
        string s = "";
        FindPath(root, s);
        return paths;

        void FindPath(TreeNode root, string s1){
            //  현재 노드가 null 이 아닐때
            if(root != null){
                //  왼쪽, 오른쪽 자식 노드가 둘 다 없으면
                if(root.left == null && root.right == null){
                    //  현재 노드의 값을 문자열에 더하고
                    s1 = s1 + root.val;
                    //  리스트에 추가
                    paths.Add(s1);
                }else{
                    //  왼쪽, 오른쪽 자식 노드가 하나라도 있으면
                    //  현재 노드의 값과 화살표를 문자열에 더하고
                    //  왼쪽, 오른쪽 자식 노드로 이동
                    s1 = s1 + root.val + "->";
                    FindPath(root.left, s1);
                    FindPath(root.right, s1);
                }
            }
        }
    }

    
}