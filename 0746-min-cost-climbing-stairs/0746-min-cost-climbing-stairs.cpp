class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int arr[1002] = {0,};
        for(int i = cost.size() - 1; i >= 0; i--){
            arr[i] = cost[i] + min(arr[i+1],arr[i+2]);
        }
        return min(arr[0],arr[1]);
    }
};