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
    vector<int> preorder(Node* root) {
        if(root == NULL){
            return {};
        }
        vector<int> ans;
        ans.push_back(root->val);
        for(int i = 0; i < root->children.size(); i++){
            vector<int> tmp = preorder(root->children[i]);
            ans.insert(ans.end(), tmp.begin(), tmp.end());
        }
        return ans;
    }
};