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
    public IList<int> PreorderTraversal(TreeNode root) {
        //  https://leetcode.com/problems/binary-tree-preorder-traversal/solutions/1260651/c-recursive-and-iterative-using-stack-with-explanation/
        //  C++에서 푼 방법과 다른 방법 솔루션
        IList<int> preorder = new List<int>();

        //  TreeNode를 자료형으로 가지는 stack 생성
        Stack<TreeNode> stack = new Stack<TreeNode>();
        TreeNode node = root;

        if(node != null){
            stack.Push(node);
        }

        //  stack에 요소가 있는 동안 반복
        while(stack.Count > 0){
            //  stack의 제일 위에 있는 요소 pop
            node = stack.Pop();
            //  현재 node의 값을 리스트에 추가
            preorder.Add(node.val);

            //  stack은 LIFO(후입선출)이기 때문에
            //  리스트에 왼쪽->오른쪽 순으로 값을 넣기 위해서는
            //  stack에 오른쪽->왼쪽 순으로 TreeNode를 넣어야 한다.
            if(node.right != null){
                stack.Push(node.right);
            }

            if(node.left != null){
                stack.Push(node.left);
            }
        }

        return preorder;
    }
}