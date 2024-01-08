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
    public int CountNodes(TreeNode root) {
        //  https://leetcode.com/problems/count-complete-tree-nodes/solutions/4110357/breadth-first-search-using-c-for-counting-tree-nodes/
        //  BFS(넓이 우선 탐색)
        if(root == null) return 0;
        if(root.left == null && root.right == null) return root.val;

        List<int> nodeData = new List<int>();
        Queue<TreeNode> nodesToVisit = new Queue<TreeNode>();
        nodesToVisit.Enqueue(root);

        while(nodesToVisit.Count > 0){
            TreeNode currentNode = nodesToVisit.Dequeue();
            nodeData.Add(currentNode.val);

            if(currentNode.left != null){
                nodesToVisit.Enqueue(currentNode.left);
            }

            if(currentNode.right != null){
                nodesToVisit.Enqueue(currentNode.right);
            }
        }
        return nodeData.Count;   
    }

    //  https://leetcode.com/problems/count-complete-tree-nodes/solutions/2817249/two-short-solutions/
    //  C++이랑 같은 방법
    //  람다식
    // public int CountNodes(TreeNode n) =>
    //     n is null ? 0 : 1 + CountNodes(n.left) + CountNodes(n.right);
    //     //  n이 null 이면 0 아닌 경우 현재 노드의 왼쪽 자식 노드 + 오른쪽 자식 노드 + 1(자기 자신)을 반환

    // public int CountNodes(TreeNode n){
    //     if(n is null) return 0;
    //     //  GetHeight의 toLeft라는 매개변수에 true를 넘긴다
    //     //  Named 파라미터 : https://www.csharpstudy.com/CSharp/CSharp-method.aspx
    //     int h = GetHeight(n, toLeft: true);
    //     return h == GetHeight(n, toLeft: false) ?
    //         (1 << h) - 1
    //         : 1 + CountNodes(n.left) + CountNodes(n.right);

    //         // 트리의 높이를 구하는 로컬 함수
    //         //  로컬 함수 : https://www.csharpstudy.com/latest/CS7-localfunc.aspx
    //         int GetHeight(TreeNode n, bool toLeft){
    //             if (n is null) return 0;
    //             int res = 1;
    //             while((n = toLeft ? n.left : n.right) is not null) res++;
    //             return res;
    //         }
    // }
}