public class Solution {
    public IList<string> FizzBuzz(int n) {
        //  내가 푼거
        // var list = new List<string>();
        // for(int i = 1; i <= n; i++){
        //     if(i % 15 == 0){
        //         list.Add("FizzBuzz");
        //     }else if(i % 3 == 0){
        //         list.Add("Fizz");
        //     }else if(i % 5 == 0){
        //         list.Add("Buzz");
        //     }else{
        //         list.Add(i.ToString());
        //     }
        // }
        // return list;

        //  ===========================
        //  https://leetcode.com/problems/fizz-buzz/solutions/2075600/c-simple-solution
        var list = new List<string>(n);
        for(int i = 1; i <= n; i++){
            string item = (i % 3 == 0, i % 5 == 0) switch
            {
                (true, true) => "FizzBuzz",
                (true, false) => "Fizz",
                (false, true) => "Buzz",
                (false, false) => i.ToString(),
            };

            list.Add(item);
        }
        return list;
    }
}