class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int cnt = 0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        for(int i = 0, j = 0; i < g.size() && j < s.size(); j++){
            if(g[i] <= s[j]){
                cnt++;
                i++;
            }
        }
        return cnt;

        //  ==============================  //
        //  Editorial
        //  투 포인터, 그리디
        //  1.  g와 s 배열을 오름차순 정렬
        //  2.  원하는 쿠키를 받은 아이들의 수를 저장하는 contentChildren 변수를 0으로 초기화
        //  3.  주어졌거나 건너뛴 쿠키의 수를 저장하는 cookieIndex 변수를 0으로 초기화
        //  4.  cookieIndex가 s의 길이보다 작고, contentChildren이 g의 길이보다 작은 동안
        //      1)  만약 쿠키의 크기가 현재 아이의 요구와 같거나 크다면 
        //          -   contentChildren을 1 증가
        //      2)  다음 쿠키로 이동하기 위해 cookieIndex를 증가
        //  5.  contentChildren을 반환
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
};