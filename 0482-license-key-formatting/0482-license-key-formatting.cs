public class Solution {
    public string LicenseKeyFormatting(string s, int k) {
        int count = 0;
        StringBuilder sb = new StringBuilder();
        for(int i = s.Length - 1; i >= 0; i--){
            if(s[i] != '-'){
                sb.Append(s[i]);
                count++;
                if(count == k){
                    sb.Append('-');
                    count = 0;
                }
            }
        }
        string ans = sb.ToString().ToUpper();
        if(ans.Length > 0 && ans[ans.Length - 1] == '-'){
            ans = ans.Remove(ans.Length - 1, 1);
        }
        return new string(ans.Reverse().ToArray());
    }
}