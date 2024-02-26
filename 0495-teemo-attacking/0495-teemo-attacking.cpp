class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int ans = 0;
        int endPoison = -1;
        for(int i = 0; i < timeSeries.size(); i++){
            if(endPoison != -1){
                if(endPoison < timeSeries[i]){
                    ans += duration;
                }else{
                    ans += timeSeries[i] + duration - 1 - endPoison;
                }
            }
            endPoison = timeSeries[i] + duration - 1;
        }
        return ans + duration;

        //  ==============================  //
        //  Editorial
        //  1. One pass
//         int n = timSeries.size();
//         if(n == 0) return 0;

//         int total = 0;
//         for(int i = 0; i < n - 1; ++i){
//             total += min(timSeries[i + 1] - timeSeries[i], duration);
//         }
//         return total + duration;

    }
};