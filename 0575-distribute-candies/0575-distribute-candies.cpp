class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int size = candyType.size() / 2;
        sort(candyType.begin(), candyType.end());
        candyType.erase(unique(candyType.begin(), candyType.end()), candyType.end());
        cout << candyType.size();
        return size < candyType.size() ? size : candyType.size();

        //  ==============================  //
        //  https://leetcode.com/problems/distribute-candies/solutions/3459892/easy-unordered-set-solution-o-n-time-complexity
        // int n = candyType.size();
        // unordered_set<int> s(candyType.begin(), candyType.end());
        // if(s.size() >= n/2){
        //     return n/2;
        // }
        // return s.size();

        //  https://leetcode.com/problems/distribute-candies/solutions/799502/c-2-line-super-simple-solution
        // int types_num = set<int>(candies.begin(), candies.end()).size();
        // return types_num > candies.size()/2 ? candies.size()/2 : types_num;

    }
};