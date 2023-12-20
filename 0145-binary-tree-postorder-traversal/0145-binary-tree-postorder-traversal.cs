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
    public IList<int> PostorderTraversal(TreeNode root) {
        // IList<int> list = new List<int>();        
        // if(root == null){
        //     return list;
        // }
        // Stack<TreeNode> stack = new Stack<TreeNode>();
        // TreeNode node = root;
        // stack.Push(node);
        // while(stack.Count > 0){
        //     node = stack.Pop();
        //     if(node.right != null){
        //         stack.Push(node.right);
        //     }
        //     if(node.left != null){
        //         stack.Push(node.left);
        //     }

        //     list.Add(node.val);
        // }
        // return list;
        List<int> result = new List<int>();
        Stack<TreeNode> stack = new Stack<TreeNode>();
        TreeNode lastNodeVisited = null;
        //  스택에 요소가 있는 동안 또는 root가 null이 아닌동안
        while(stack.Count > 0 || root != null){
            //  현재 노드가 null이 아니면
            if(root != null){
                //  stack에 현재 노드 추가
                stack.Push(root);

                //  현재 노드의 왼쪽 자식 노드로 이동
                root = root.left;
            }
            //  현재 노드가 null 인 경우
            else{
                //  stack의 제일 위에 있는 노드를 받아온다
                TreeNode node = stack.Peek();
                
                //  stack의 제일 위에 있는 노드의 오른쪽 자식 노드가 null 이 아니고
                //  방문했던 노드가 아니라면
                if(node.right != null && lastNodeVisited != node.right){

                    //  현재 노드를 오른쪽 자식노드로 이동
                    root = node.right;
                }
                //  stack의 제일 위에 있는 노드의 오른쪽 자식 노드가 null 이거나
                //  방문했던 노드라면
                else{
                    //  값을 리스트에 추가하고
                    result.Add(node.val);
                    //  최근에 방문한 노드로 저장 및 stack에서 pop
                    lastNodeVisited = stack.Pop();
                }
            }
        }
        return result;
    }
}