class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        // int max=0, idx=0;
        
        // for(int i = 0; i<arr.size(); i++){
        //     if(arr[i] > max){
        //         max = arr[i];
        //         idx = i;
        //     }
        // }
        // return idx;

        //USING BINARY SEARCH
        int n = arr.size();
        int left = 0, right = n-1;

        while(left < right){
            int mid = left + (right - left)/2;
            if(arr[mid] < arr[mid+1]){  //we are in increasing wala part of array
               left = mid+1;
            }
            else
               right = mid;
        }
        return left;
    }
};