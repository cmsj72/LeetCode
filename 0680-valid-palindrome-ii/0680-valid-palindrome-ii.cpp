class Solution {
public:
    bool func(int left, int right, string s){
        while(left < right){
            if(s[left] == s[right]){
                left++, right--;
            }else{
                return false;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        if(s.size() == 1) return true;
        cout << s.size() << endl;
        int left = 0;
        int right = s.size() - 1;
        while(left < right){
            if(s[left] == s[right]){
                left++, right--;
            }else if(func(left+1, right, s) || func(left, right - 1, s)){
                break;
            }else{
                return false;
            }
        }
        return true;
    }

    //  ==============================  //
    //  submission 제일 빠른 코드

    // bool isPalindrome(string s){
    //     for(int i=0;i<s.size()/2;i++){
    //         if(s[i]!=s[s.size()-1-i]) return false;
    //     }
    //     return true;
    // }

    // bool validPalindrome(string s) {
    //     ios_base::sync_with_stdio(0);
    //     for(int i=0;i<s.size()/2;i++){
    //         if(s[i]!=s[s.size()-1-i]){
    //             string left = s;
    //             string right = s;
    //             left.erase(left.begin()+i);
    //             right.erase(right.begin()+(s.size()-1-i));
    //             cout << left << "," << right << endl;
    //             return isPalindrome(left)||isPalindrome(right);
    //         }
    //     }
    //     return true;
    // }
};