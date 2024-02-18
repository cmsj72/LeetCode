public class Solution {
    public int FindContentChildren(int[] g, int[] s) {
        Array.Sort(g);
        Array.Sort(s);

        int contentChildren = 0;
        int cookieIdx = 0;
        while(cookieIdx < s.Length && contentChildren < g.Length){
            if(s[cookieIdx] >= g[contentChildren]){
                contentChildren++;
            }
            cookieIdx++;
        }
        return contentChildren;

        // std::sort(g.begin(), g.end());
        // std::sort(s.begin(), s.end());
        // int contentChildren = 0;
        // int cookieIndex = 0;
        // while (cookieIndex < s.size() && contentChildren < g.size()) {
        //     if (s[cookieIndex] >= g[contentChildren]) {
        //         contentChildren++;
        //     }
        //     cookieIndex++;
        // }
        // return contentChildren;
    }
}