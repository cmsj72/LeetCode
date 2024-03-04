class Solution {
public:
    int findLUSlength(string a, string b) {
        if(a == b) return - 1;
        else return max(a.size(), b.size());

        //  ==============================  //
        //  https://gracefulsoul.github.io/leetcode/longest-uncommon-subsequence-i/
        //  맞았는데 알고 푼게 아니라 설명 첨부
    }
};