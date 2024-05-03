class Solution {
public:
    string func(string str){
        string result = "";
        for(int i = 0; i < str.length(); i++){
            if(str[i] != '#'){
                result.push_back(str[i]);
            }else{
                if(result.length() != 0){
                    result.pop_back();
                }
            }
        }
        return result;
    }
    
    bool backspaceCompare(string s, string t) {
        return func(s) == func(t);
    }
};