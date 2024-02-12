public class Solution {
    public int ThirdMax(int[] nums) {
        //  c++에서 본 SortedSet 을 이용한 방법
        //  SortedSet : 중복을 허용하지 않고 어떤 순서대로 정렬되어있는 집합
        //  HashSet : SortedSet에서 정렬을 뺀 Set, Key가 어떤 순서대로 정렬되어 있지 않으면서 Set의 역할을 함
        var st = new SortedSet<int>();
        foreach(var n in nums){
            if(st.Contains(n)){
                continue;
            }
            if(st.Count == 3){
                if(st.Min < n){
                    st.Remove(st.Min);
                    st.Add(n);
                }
            }else{
                st.Add(n);
            }
        }
        if(st.Count < 3){
            return st.Max;
        }
        return st.Min;
        //  ==============================  //
        //  https://leetcode.com/problems/third-maximum-number/solutions/3524334/easy-to-understand-solution-uses-distinct-and-sort-method
        //  .Distinct() : 중복 값 제거
        //  .ToList() : 배열인 nums를 List 형태로 반환
        // List<int> list = nums.Distinct().ToList();
        // list.Sort();
        // if(list.Count < 3){
        //     return list[list.Count - 1];
        // }
        // return list[list.Count - 3];

        //  ==============================  //
        //  https://leetcode.com/problems/third-maximum-number/solutions/3308917/simple-solution-using-hashset
        // HashSet<int> set = new HashSet<int>();
        // foreach(int num in nums){
        //     set.Add(num);
        //     if(set.Count > 3)
        //         set.Remove(set.Min());
        // }
        // if(set.Count < 3)
        //     return set.Max();
        // return set.Min();

        //  ==============================  //
        //  기타 여러 풀이
        //  https://leetcode.com/problems/third-maximum-number/solutions/2148647/c-3-solutions-classic-priority-queue-and-linq-one-liner
    }
}