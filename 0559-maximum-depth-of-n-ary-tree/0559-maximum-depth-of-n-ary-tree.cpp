/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int ans = 1;
    void func(Node* root, int depth){
        if(root->children.size() == 0){
            ans = max(ans, depth);
            return;
        }
        for(int i = 0; i < root->children.size(); i++){
            func(root->children[i], depth+1);
        }
    }
    int maxDepth(Node* root) {
        if(root == NULL){
            return 0;
        }
        func(root, 1);
        return ans;
    }

    //  ==============================  //
    //  https://leetcode.com/problems/maximum-depth-of-n-ary-tree/solutions/167010/dfs-bfs-solutions-in-c
};