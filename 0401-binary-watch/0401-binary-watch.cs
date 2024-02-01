public class Solution {
    public IList<string> ReadBinaryWatch(int turnedOn) {
        IList<string> list = new List<string>();
        for(int i = 0; i < 12; i++){
            for(int j = 0; j < 60; j++){
                if(CountBits(i) + CountBits(j) == turnedOn){                    
                    list.Add(i.ToString() + ":" + (j < 10 ? 0 : "") + j.ToString());
                }
            }
        }
        return list;

        //  https://leetcode.com/problems/binary-watch/solutions/3491042/c
        int CountBits(int num){
            var count = 0;
            while(num != 0){
                if(num % 2 == 1)
                    count++;
                num /= 2;
            }
            return count;
        }
    }
}