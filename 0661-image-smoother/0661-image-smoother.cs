public class Solution {
    public int[][] ImageSmoother(int[][] img) {
        //  Editorial
        int m = img.Length;
        int n = img[0].Length;

        int[] temp = new int[n];
        int prevVal = 0;

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                int sum = 0;
                int count = 0;

                //  아래 이웃
                if(i + 1 < m){
                    if(j - 1 >= 0){
                        sum += img[i + 1][j - 1];
                        count += 1;
                    }
                    sum += img[i + 1][j];
                    count += 1;
                    if(j + 1 < n){
                        sum += img[i + 1][j + 1];
                        count += 1;
                    }
                }

                //  옆 이웃(현재 위치에서 오른쪽)
                if(j + 1 < n){
                    sum += img[i][j + 1];
                    count +=1;
                }

                //  현재 위치
                sum += img[i][j];
                count += 1;

                //  옆 이웃(현재 위치에서 왼쪽)
                if(j - 1 >= 0){
                    sum += temp[j - 1];
                    count += 1;
                }

                //  위 이웃
                if(i - 1 >= 0){
                    //  
                    if(j - 1 >= 0){
                        sum += prevVal;
                        count += 1;
                    }

                    sum += temp[j];
                    count += 1;

                    if(j + 1 < n){
                        sum += temp[j + 1];
                        count += 1;
                    }
                }

                if(i - 1 >= 0){
                    prevVal = temp[j];
                }

                temp[j] = img[i][j];

                img[i][j] = sum / count;
            }
        }

        return img;
    }
}