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
 //https://leetcode.com/problems/minimum-depth-of-binary-tree/solutions/3265750/clean-c-solutions-using-dfs-and-bfs-approaches/
 //C#은 코드 주석 링크 풀이보고 BFS 방법으로 코드 분석 해보기로 했다
public class Solution {
    public int MinDepth(TreeNode root) {
        //  현재 root가 없는 노드 라면 0을 반환
        if(root == null){
            return 0;
        }

        //  TreeNode를 담을 queue 선언
        var queue = new Queue<TreeNode>();
        //  root를 Enqueue
        queue.Enqueue(root);

        //  높이는 0부터
        var depth = 0;
        
        //  queue가 비어있지 않는 동안 반복
        while(queue.Count != 0){

            //  현재 큐에 들어있는 노드의 개수
            var size = queue.Count;

            //  size 만큼 반복
            for( var i = 0; i < size; i++){

                //  queue 에서 가장 먼저 들어온 TreeNode를 Dequeue
                var current = queue.Dequeue();

                //  왼쪽 자식 노드가 있으면 큐에 삽입
                if(current.left != null){
                    queue.Enqueue(current.left);
                }
                //  오른쪽 자식 노드가 있으면 큐에 삽입
                if(current.right != null){
                    queue.Enqueue(current.right);
                }

                //  왼쪽, 오른쪽 자식 노드가 없는 말단 노드 인 경우 depth+1을 반환하고 return
                if(current.left == null && current.right == null){
                    return depth + 1;
                }
            }

            //  for문에서 말단 노드가 없었으면 depth를 증가
            depth++;
        }
        return 0;
    }
}