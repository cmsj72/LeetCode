/*
// Definition for a Node.
public class Node {
    public int val;
    public IList<Node> children;

    public Node() {}

    public Node(int _val) {
        val = _val;
    }

    public Node(int _val,IList<Node> _children) {
        val = _val;
        children = _children;
    }
}
*/

public class Solution {
    public IList<int> Preorder(Node root) {
        List<int> list = new List<int>();
        if(root == null){
            return list;
        }
        list.Add(root.val);
        for(int i = 0; i < root.children.Count; i++){
            list.AddRange(Preorder(root.children[i]));
        }
        return list;
    }
}