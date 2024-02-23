class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string ans;
        for(int i = 0; i < s.size(); i++){            
            if(s[i] != '-') ans += toupper(s[i]);
        }
        cout << ans << endl;
        int cnt = 0;
        for(int i = ans.size() - 1; i >= 0; i--){            
            cnt++;
            if(cnt == k && i != 0){                
                ans.insert(i, "-");
                cnt = 0;
            }
        }
        return ans;

        //  ==============================  //
        //  Editorial
        //  1. 오른쪽에서 왼쪽으로 순회
        //  s의 끝에서 부터 앞으로 오면서 k의 갯수를 세면서 '-'를 삽입
        // int count = 0;
        // int n = s.length();
        // string ans = "";
        // for(int i = n - 1; i >= 0; i--){
        //     if(s[i] != '-'){
        //         ans.push_back(toupper(s[i]));
        //         count++;
        //         if(count == k){
        //             ans.push_back('-');
        //             count = 0;
        //         }
        //     }
        // }
        // //  문장의 제일 끝(뒤집을 경우 제일 앞으로 오는 문자)에 '-'가 있는 경우 제거
        // if(ans.size() > 0 && ans.back() == '-'){
        //     ans.pop_back();
        // }
        // reverse(ans.begin(), ans.end());
        // return ans;

        //  2. 왼쪽에서 오른쪽으로 순회
        //  첫 번째 그룹에 들어갈 문자의 갯수를 구하고 문자열을 다시 만드는 방법
//         int totalChars = 0;
//         for (int i = 0; i < s.length(); i++) {
//             if (s[i] != '-') {
//                 totalChars++;
//             }
//         }
//         int sizeOfFirstGroup = (totalChars % k);
//         if (sizeOfFirstGroup == 0) {
//             sizeOfFirstGroup = k;
//         }
//         string ans = "";
//         int i = 0;
//         int count = 0;
        
//         while (i < s.length()) {
//             if (count == sizeOfFirstGroup) {
//                 count = 0;
//                 break;
//             }
//             if (s[i] != '-') {
//                 count++;
//                 ans.push_back(toupper(s[i]));
//             }
//             i++;
//         }
//         /* This case will only appear if the value of k is greater than the total number 
//            of alphanumeric characters in string s */
//         if (i >= s.length()) {
//             return ans;
//         }
        
//         ans.push_back('-');
        
//         while (i < s.length()) {
//             if (s[i] != '-') {
//                 /* Whenever count is equal to k, we put a '-' after each group*/
//                 if (count == k) {
//                     ans.push_back('-');
//                     count = 0;
//                 }
//                 ans.push_back(toupper(s[i]));
//                 count++;
//             }
//             i++;
//         }
//         return ans;
    }
};