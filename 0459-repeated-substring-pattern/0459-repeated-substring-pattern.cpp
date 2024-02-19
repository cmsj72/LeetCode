class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        for(int index = 0; index < s.size() / 2; index++){
            if(s.size() % (index + 1) != 0) continue;
            int cnt = s.size() / (index + 1);
            string str = s.substr(0, index + 1);
            cout << str << endl;
            bool flag = true;
            for(int j = 1; j < cnt; j++){
                //  cout << str.size() * index << " , " << str.size() << endl;
                string tmp = s.substr(str.size() * j, str.size());                
                if(str != tmp){
                    flag = false;
                    break;
                }
            }
            if(flag){
                return true;
            }
        }
        return false;

        //  ==============================  //
        //  https://leetcode.com/problems/repeated-substring-pattern/solutions/3938580/99-42-2-approaches-o-n
        //  1.  모든 가능한 부분문자열을 확인하는 방법
        //  이게 내가 한 방법이랑 거의 똑같음 
        //  이게 훨씬 짧고 간략함
        // int n = s.length();
        // for(int i = 1; i <= n / 2; ++i){
        //     if(n % i == 0){
        //         string substring = s.substr(0,i);
        //         string repeated = "";
        //         for(int j = 0; j < n / i; ++j){
        //             repeated += substring;
        //         }
        //         if(repeated == s)
        //             return true;
        //     }
        // }
        // return false;

        //  2.  영리한 문자열 조작?(Clever String Manipulation)
        //  s의 부분 문자열을 반복하여 문자열을 구성할 수 있는 경우
        //  s를 두 개 연결하고 첫 번째 문자와 마지막 문자를 제거해도 여전히 부분 문자열로 s가 포함된다는
        //  접근 방식
        // string doubled = s + s;
        // string sub = doubled.substr(1, doubled.size() - 2);
        // return sub.find(s) != string::npos;
    }
};