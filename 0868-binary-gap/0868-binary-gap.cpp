class Solution {
public:
    int binaryGap(int n) {
        vector<int> vec;
        while(n > 0){
            vec.push_back(n % 2);
            n /= 2;
        }
        reverse(vec.begin(), vec.end());
        int ans = 0, cnt = 0;
        for(int i = 1; i < vec.size(); i++){
            if(vec[i] == 0){
                cnt++;
            }else{
                ans = max(ans, cnt + 1);
                cnt = 0;
            }
        }
        return ans;
    }
};