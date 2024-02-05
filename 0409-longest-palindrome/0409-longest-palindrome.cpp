class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> mp;
        for(int i = 0; i < s.length(); i++){
            mp[s[i]]++;
        }
        bool flag = true;
        int len = 0;
        for(auto p : mp){
            cout << p.second << endl;
        }
        for(auto p : mp){
            if(p.second == 1){
                if(flag){
                    len++;
                    flag = false;
                    break;
                }
            }
        }
        for(auto p : mp){
            if(p.second % 2 == 1){
                if(flag){
                    len += p.second;
                    flag = false;
                }else{
                    len += p.second - 1;
                }                
            }else{
                len += p.second;
            }
        }
        return len;
    }
};