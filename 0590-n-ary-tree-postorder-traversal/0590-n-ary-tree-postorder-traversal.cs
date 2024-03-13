/*
// Definition for a Node.
public class Node {
    public int val;
    public IList<Node> children;

    public Node() {}

    public Node(int _val) {
        val = _val;
    }

    public Node(int _val, IList<Node> _children) {
        val = _val;
        children = _children;
    }
}
*/

public class Solution {
    public IList<int> Postorder(Node root) {
        //  https://leetcode.com/problems/n-ary-tree-postorder-traversal/solutions/4658452/post-order-traversal-c
        List<int> output = new();
        Traverse(root);
        return output;

        void Traverse(Node current){
            if(current == null) return;

            foreach(Node child in current.children){
                Traverse(child);
            }
            output.Add(current.val);
        }
    }
}