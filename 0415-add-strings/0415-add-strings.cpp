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
    }
};