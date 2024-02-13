class Solution {
public:
    string addStrings(string num1, string num2) {
        int pt1 = num1.length() - 1;
        int pt2 = num2.length() - 1;
        string ans = "";
        int k = 0;
        do{
            int n = k + (pt1 < 0 ? 0 : num1[pt1] - '0') + (pt2 < 0 ? 0 : num2[pt2] - '0');
            cout << n << endl;
            if(n >= 10){
                k = n / 10;
                n = n % 10;
            }else{
                k = 0;
            }
            ans = to_string(n) + ans;
            if(pt1 > -1) pt1--;
            if(pt2 > -1) pt2--;
        }while(pt1 >= 0 || pt2 >= 0);
        if(k > 0){
            ans = to_string(k) + ans;
        }
        return ans;

        //  ==============================  //
        //  https://leetcode.com/problems/add-strings/solutions/4678954/simplest-solution
        //  풀이 방향은 거의 같았지만 내가 짠 코드는 디테일?이 부족했었던듯
        // int l = num1.length() - 1;
        // int l2 = num2.length() - 2;
        // int x = 0;
        // int carry = 0;
        // string answer;

        // while(l >= 0 || l2 >= 0 || carry > 0){
        //     int digit1 = (l >= 0) ? num1[l] - '0' : 0;
        //     int digit2 = (l2 >= 0) ? num2[l2] - '0' : 0;
        //     x = digi1 + digit2 + carry;
        //     carry = x / 10;
        //     x %= 10;
        //     answer.insert(answer.begin(), x + '0');
        //     if(l >= 0) l--;
        //     if(l2 >= 0) l2--;
        // }
        // return answer;
    }
};