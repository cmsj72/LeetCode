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

        //  ========================
        //  https://leetcode.com/problems/longest-palindrome/solutions/3156147/c-easiest-beginner-friendly-sol-o-n-time-and-o-128-o-1-space
        // int oddCount = 0;
        // unordered_map<char, int> ump;
        // for(char ch : s){
        //     ump[ch]++;
        //     if(ump[ch] % 2 == 1){
        //         oddCount++;
        //     }else{
        //         oddCount--;
        //     }            
        // }
        // cout << oddCount << endl;
        // if(oddCount > 1){
        //     return s.length() - oddCount + 1;
        // }
        // return s.length();
    }
};