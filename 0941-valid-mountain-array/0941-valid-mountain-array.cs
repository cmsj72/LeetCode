public class Solution {
    public bool ValidMountainArray(int[] arr) {
        //  https://leetcode.com/problems/valid-mountain-array/solutions/3350244/c-solution
        int maxNum = arr.Max();
        //  가장 큰 수의 인덱스를 찾는다
        var maxIndex = Array.FindIndex(arr, n => n == maxNum);

        //  인덱스가 0이거나 제일 끝 인덱스라면 false를 반환
        //  증가하는 부분이 없거나 증가하는 부분만 있기 때문
        if(maxIndex == 0 || maxIndex == arr.Length-1){
            return false;
        }
        
        int currentRight = arr[maxIndex];
        //  가장 큰 값의 오른쪽이 내림차순이 맞는지 확인
        for(int i = maxIndex + 1; i < arr.Length; i++){
            bool ans = currentRight > arr[i];
            if(!ans) return false;
            currentRight = arr[i];
        }

        int currentLeft = arr[0];
        //  첫 번째 값부터 가장 큰 값까지 오름차순인지 확인
        for(int j = 1; j < maxIndex; j++){
            bool ans = currentLeft < arr[j];
            if(!ans) return false;
            currentLeft = arr[j];
        }

        return true;
    }
}