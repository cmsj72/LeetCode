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
    }
};