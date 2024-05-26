class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size() == 1) return false;
        int cnt = 0;
        for(int i = 0; i < arr.size() - 1; i++){
            if(arr[i] < arr[i+1]){
                if(cnt == 0) cnt = 1;
                else if(cnt == -1) return false;
            }else if(arr[i] > arr[i+1]){
                if(cnt == 1) cnt = -1;
                else if(cnt == 0) return false;
            }else{
                return false;
            }
        }
        return cnt == -1;

        //  ==============================  //
        //  submission 제일 빠른 코드
        // int size = arr.size();
        // int i = 0;
        // while(i+1 < size && arr[i] < arr[i+1]){
        //     i++;
        // }
        // if(i == 0 || i == size - 1){
        //     return false;
        // }
        // while(i+1 < size && arr[i] > arr[i+1]){
        //     i++;
        // }
        // return i == size-1;
    }
};