/* The isBadVersion API is defined in the parent class VersionControl.
      bool IsBadVersion(int version); */

public class Solution : VersionControl {
    public int FirstBadVersion(int n) {
        //  c++에서 봤던 솔루션 기반
        //  1~n 이기 때문에 start = 1, end = n
        int start = 1;
        int end = n;
        int minBadVersion = 0;

        //  start가 end보다 작거나 같은 동안
        while(start <= end){
            //  mid는 start와 end의 중간
            int mid = start + (end - start) / 2;
            // int mid = (end + start) / 2;
            Console.WriteLine(mid);

            //  mid가 BadVersion 이면            
            if(IsBadVersion(mid)){
                //  ㅁ..... T ......T
                //  즉 mid가 현재 알 수있는 최소의 최초의 BadVersion이다
                minBadVersion = mid;
                //  그리고 end를 mid - 1로 바꾼다
                //  ㅁ...FTTT
                //          ㄴminBadVersion
                //  일 수도 있기 때문에 계속 탐색
                end = mid - 1;
            }else{
                //  mid가 BadVersion이아니면 start에서 mid까지는 BadVersion이 아니기 때문에
                //  찾고자 하는 답은 mid와 end 사이에 있다.
                start = mid + 1;
            }
        }
        return minBadVersion;
    }
}