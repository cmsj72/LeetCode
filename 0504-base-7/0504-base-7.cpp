class Solution {
public:
    string convertToBase7(int num) {
        if(num == 0){
            return "0";
        }
        string ans;
        bool flag = false;
        if(num < 0){
            flag = true;
            num *= -1;
        }
        while(num > 0){
            int n = num % 7;
            num /= 7;
            ans = to_string(n) + ans;
        }
        if(flag){
            ans = "-" + ans;
        }
        return ans;
    }
};