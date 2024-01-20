// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        //  통과는 됐지만 좋지 않은 방법
        //  시간제한 있으면 통과 못할수도
        for(int i = 1; i <= n; i+=2){
            if(isBadVersion(i) == true){
                if(isBadVersion(i-1) == true)
                    return i - 1;
                else
                    return i;
            }
        }
        for(int i = 2; i <= n; i+=2){
            if(isBadVersion(i)){
                if(isBadVersion(i-1))
                    return i - 1;
                else
                    return i;
            }
        }
        return 0;

        //  https://leetcode.com/problems/first-bad-version/solutions/4007035/first-bad-version
        //  처음엔 이진탐색을 이용한다는 것까지 갔지만 실제 구현에서 막혔음
        // long long int start = 0;
        // long long int end = n;
        // long long int minBadVersion;

        // while(start <= end){
        //     long long int mid = (start + end) / 2;

        //     if(isBadVersion(mid) == 1){
        //         minBadVersion = mid;
        //         end = mid - 1;
        //     }else{
        //         start = mid + 1;
        //     }
        // }
        // return minBadVersion;
    }
};