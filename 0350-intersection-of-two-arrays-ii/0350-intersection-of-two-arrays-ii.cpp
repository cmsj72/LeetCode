class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        //  https://leetcode.com/problems/intersection-of-two-arrays-ii/solutions/3099498/c-6ms-10mb-short-and-simple-using-search-and-erase
        //  원래 정렬, 중복제거 후 했던방법 대로 하려 했으나
        //  다른 방법이 궁금하여 다른 솔루션 찾아봤음
        vector<int> ans;
        //  nums1은 돌면서
        for(auto & p : nums1){
            //  nums1의 p가 nums2에 있는지 찾아보고
            auto k = find(nums2.begin(), nums2.end(), p);
            //  k!= nums2.end() 인 경우 
            //  즉, nums2에 p와 같은 수가 있으면
            if(k != nums2.end()){
                //  nums2에서 k(=p)를 지우고
                nums2.erase(k);
                //  vector에 p 삽입
                ans.push_back(p);
            }
        }
        return ans;

    }
};