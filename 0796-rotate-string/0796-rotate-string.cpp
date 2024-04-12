class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()){
            return false;
        }
        string tmp = s + s;
        if(tmp.find(goal) != string::npos){
            return true;
        }
        return false;
    }
};