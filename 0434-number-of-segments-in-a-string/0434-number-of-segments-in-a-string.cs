public class Solution {
    public int CountSegments(string s) {
        //  아래는 실패한 방법
        //  c++ 풀이에서 본 방법도 index가 배열의 범위 밖을 참조하면 오류가 나는 것을 고쳐서 쓸 방법을 모르곘어서 실패
        // if(s == "") return 0;
        // string[] seg = s.Split(' ');
        // return seg.Length;

        //  ==============================  //
        //  https://leetcode.com/problems/number-of-segments-in-a-string/solutions/3154535/one-loop-no-linq-no-build-in-operators-beats-90
        //  내가 처음에 사용한 방법을 더 깔끔하게 만든 풀이
        var result = 0;
        var counterOn = true;
        for(var index = 0; index < s.Length; index++){
            var item = s[index];
            //  현재 인덱스가 공백이 라면
            if(item == ' '){
                counterOn = true;
            }
            //  현재 인덱스가 공백이 아니고(위의 if문에서 공백이 아니면 현재 else if문을 오게된다.)
            //  counterOn이 true라면
            else if(counterOn){
                result++;
                counterOn = false;
            }            
        }
        return result;
    }
}