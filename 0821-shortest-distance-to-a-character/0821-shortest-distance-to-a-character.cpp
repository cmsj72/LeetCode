class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> vec(s.size(), 0);
        for(int i = 0; i < s.size(); i++){
            if(s[i] != c){
                int left = i == 0 ? 1000 : 1;
                int right = i == s.size() - 1 ? 1000 : 1;
                bool lFlag = false, rFlag = false;
                while(i - left > -1){
                    if(s[i - left] == c){
                        lFlag = true;
                        break;
                    }
                    left++;
                }
                while(i + right < s.size()){
                    if(s[i + right] == c){
                        rFlag = true;
                        break;
                    }
                    right++;
                }
                vec[i] = min(lFlag ? left : 1000, rFlag ? right : 1000);
            }
        }
        return vec;

        //  ==============================  //
        //  submission 제일 빠른 코드
        //  근데 잘 모르겠네;
        // int prev = -1;
        // vector<int> result;
        // for(int i = 0; i < s.length(); i++){
        //     if(s[i] == c){
        //         if(prev == -1){
        //             for(int j = 0; j <= i; j++)
        //                 result.push_back(i-j);
        //             prev = i;
        //         }
        //         else{
        //             for(int j = prev+1+(i-prev)/2; j < i; j++)
        //                 result[j] = min(result[j], i-j);
        //             result.push_back(0);
        //             prev = i;
        //         }
        //     }
        //     else if(prev != -1)
        //         result.push_back(i-prev);
        // }
        // return result;
        
        //  https://leetcode.com/problems/shortest-distance-to-a-character/solutions/2173687/c-solution-simple-easy-understanding
        // vector<int> position;
        // vector<int> answer;
        
        // for(int i=0; i<s.size(); i++)
        // {
        //     if(s[i]==c)
        //         position.push_back(i);
        // }
        
        // for(int i=0; i<s.size(); i++)
        // {
        //     int shortest_dist = INT_MAX;
        //     for(int j=0; j<position.size(); j++)
        //     {
        //         shortest_dist = min(shortest_dist, abs(i-position[j]));
        //     }
        //     answer.push_back(shortest_dist);
        // }
        
        // return answer;
    }
};