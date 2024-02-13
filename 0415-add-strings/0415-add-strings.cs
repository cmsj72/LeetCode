public class Solution {
    public string AddStrings(string num1, string num2) {
        //  c++에서 풀이를 참고해 푼 방법
        int pt1 = num1.Length - 1;
        int pt2 = num2.Length - 1;
        int n = 0;
        int carry = 0;
        string ans = "";
        while(pt1 >= 0 || pt2 >= 0 || carry > 0){
            int n1 = (pt1 >= 0) ? num1[pt1] - '0' : 0;
            int n2 = (pt2 >= 0) ? num2[pt2] - '0' : 0;
            n = n1 + n2 + carry;
            carry = n / 10;
            n %= 10;
            ans = n.ToString() + ans;
            if(pt1 >= 0) pt1--;
            if(pt2 >= 0) pt2--;
        }
        return ans;

        //  ==============================  //
        //  https://leetcode.com/problems/add-strings/solutions/3560254/easy-solution
        //  StringBuilder를 이용하는 것이 더 좋을듯
        // StringBuilder sb = new();
        // sb.Insert(/*들어갈 위치(index)*/, /*들어갈 값*/);
    }
}