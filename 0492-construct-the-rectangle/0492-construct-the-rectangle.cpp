class Solution {
public:
    vector<int> constructRectangle(int area) {
        int mn = area + 1;
        vector<int> ans;
        for(int i = area; i >=1; i--){
            if(area % i != 0) continue;
            int n = area / i;
            if(i < n){
                break;
            }
            else{
                mn = min(mn, i);
            }
        }
        ans.push_back(mn);
        ans.push_back(area / mn);
        return ans;

        //  ==============================  //
        //  https://leetcode.com/problems/construct-the-rectangle/solutions/2716255/c-100-faster-than-all-easy
        // vector<int> ans;
        // int width = 1;
        // for(int i = 1; i <= sqrt(area); i++){
        //     if(area % i == 0){
        //         width = i;
        //     }
        // }
        // ans.push_back(area / width);
        // ans.push_back(width);
        // return answer;

        //  https://leetcode.com/problems/construct-the-rectangle/solutions/3672605/1-liner-python-and-3-liner-cpp
        //  더 짧게
        // int s = int(sqrt(area));
        // while(area % s != 0) s--;
        // return {area / s, s};
    }
};