class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool firstrowzeros=false;
        bool firstcolzeros=false;

        int m=matrix.size();               //gives no.of rows
        int n=matrix[0].size();            //gives no.of cols

        for(int j=0;j<n;j++){       //check if first row has a zero
            if(matrix[0][j]==0){
                firstrowzeros=true;
                break;
            }
        }
         for(int i=0;i<m;i++){    //check if first col has a zero
            if(matrix[i][0]==0){
                firstcolzeros=true;
                break;
            }
        }
        for(int i=0;i<m;i++){      //Step 2: Use first row and column to mark 0s
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        for(int i=1;i<m;i++){         // Step 3: Set cells to 0 based on markers
            for(int j=1;j<n;j++){
                if(matrix[i][0]==0 || matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
        }
        if(firstrowzeros){             // Step 4: Handle the first row
            for(int j=0;j<n;j++){
                matrix[0][j]=0;
            }
        }
        if(firstcolzeros){            // Step 4: Handle the first col
            for(int i=0;i<m;i++){
                matrix[i][0]=0;
            }
        }
    }
};