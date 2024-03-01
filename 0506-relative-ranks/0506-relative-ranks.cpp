class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<string> ans(n);
        priority_queue<pair<int,int>> pq;
        for(int i = 0; i < n; ++i){
            pq.push({score[i], i});
        }
        for(int i = 1; i <= n; ++i){
            string rank = "";
            if(i == 1) rank = "Gold Medal";
            else if(i == 2) rank = "Silver Medal";
            else if(i == 3) rank = "Bronze Medal";
            else rank = to_string(i);
            ans[pq.top().second] = rank;
            pq.pop();
        }
        return ans;
    }
};