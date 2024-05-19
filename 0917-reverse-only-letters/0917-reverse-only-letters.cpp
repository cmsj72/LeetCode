class Solution {
public:
    string reverseOnlyLetters(string s) {
        int left = 0, right = s.length() - 1;
        while(left < right){
            while(!isalpha(s[left])){
                left++;
                if(left > s.length() - 1) break;
            }
            while(!isalpha(s[right])){
                right--;
                if(right < 0) break;
            }
            if(left > s.length() - 1 || right < 0 || left > right) break;
            cout << left << "," << right << endl;
            swap(s[left++], s[right--]);
        }
        return s;
    }
};