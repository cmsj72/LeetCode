public class Solution {
    public string MostCommonWord(string paragraph, string[] banned) {
        //  https://leetcode.com/problems/most-common-word/solutions/4862767/c-beats-81-in-terms-of-runtime-easy-to-understand
        if(paragraph == null) return null;

        StringBuilder word = new StringBuilder();
        Dictionary<string, int> wordCount = new Dictionary<string, int>();

        foreach(var character in paragraph){
            if(Char.IsLetter(character)){
                word.Append(character);
            }
            else if(!string.IsNullOrEmpty(word.ToString())){
                string lowerWord = word.ToString().ToLower();
                if(wordCount.ContainsKey(lowerWord)){
                    wordCount[lowerWord]++;
                }
                else{
                    wordCount.Add(lowerWord, 1);
                }

                word = new StringBuilder();
            }
        }

        if (!string.IsNullOrEmpty(word.ToString()))
        {
            string lowerWord = word.ToString().ToLower();
            if (wordCount.ContainsKey(lowerWord)){
                wordCount[lowerWord]++;
            }
            else{
                wordCount.Add(lowerWord, 1);
            }
        }

        foreach(var item in banned){
            if(wordCount.ContainsKey(item)){
                wordCount.Remove(item);
            }
        }

        int maxCount = 0;
        string maxCountWord = string.Empty;
        foreach(var item in wordCount){
            if(item.Value > maxCount){
                maxCount = item.Value;
                maxCountWord = item.Key;
            }
        }

        return maxCountWord;
    }
}