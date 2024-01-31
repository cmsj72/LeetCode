class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> mp;
        for(int i = 0; i < t.length(); i++){
            mp[t[i]]++;
        }
        for(int i = 0; i < s.length(); i++){
            mp[s[i]]--;
        }
        for(auto t : mp){
            if(t.second) return t.first;
        }
        return NULL;

        //  =================================
        //  https://leetcode.com/problems/find-the-difference/solutions/1751380/java-c-python-very-very-easy-to-go-solution

        //  0 ^ a = a;
        //  a ^ a = 0;
        // char c = 0;
        // for(char cs : s) c ^= cs;
        // for(char ct : t) c ^= ct;
        // return c;

        //  =================================
        //  https://leetcode.com/problems/find-the-difference/solutions/1751509/c-time-100-memory-98-6-3-lines-propagate-the-difference-ascii
        //  아스키코드 합의 차이를 이용한 풀이 방법
        // for(int i = 0; i < s.length(); i++){
        //     t[i+1] += t[i] - s[i];
        // }
        // return t[t.size() - 1];

        //  =================================
        //  https://leetcode.com/problems/find-the-difference/solutions/1752248/c-6-approach-from-view-of-sort-count-xor-sum
        //  기타 다른풀이 같이 있는거
    }
};