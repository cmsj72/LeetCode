class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        map<int,int> mp;
        for(int i = 0; i < nums.size(); i++){
            mp.insert({nums[i]*-1, i});
        }
        map<int,int>::iterator it = mp.begin();
        int num1,num2, num1Index;
        num1 = -1 * it->first, num1Index = it->second;
        it++;
        num2 = -1 * it->first;
        if(num1 >= num2 * 2){
            return num1Index;
        }
        return -1;
    }
};