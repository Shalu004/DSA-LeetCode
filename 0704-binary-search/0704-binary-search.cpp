class Solution {
public:
    int bs(vector<int>& arr, int tar, int st, int end){      //Binary search using recurrsion
        if(st<=end){
            int mid = st + (end-st)/2;
            if(arr[mid]==tar) return mid;
            else if(arr[mid]<=tar)
                return bs(arr, tar, mid+1, end);
            else
                return bs(arr, tar, st, mid-1);
        }
        return -1;
    }
    
    int search(vector<int>& nums, int target) {
        return bs(nums, target, 0, nums.size()-1);
    }
};

//     int search(vector<int>& nums, int target) {
//         int mid,low,high,flag=0;
//         int n=nums.size();
//         //sort(nums.begin(),nums.end());
//         low=0;
//         high=n-1;
//         while(low<=high){
//             mid=low+(high-low)/2;
//             if(target==nums[mid]){
//                 flag=1;
//                 break;
//             }
//             else if(target<nums[mid]){
//                 high=mid-1;
//             }
//             else if(target > nums[mid]){
//                 low=mid+1;
//             }
//         }
//         if(flag) return mid;
//         else return -1;
//     }
// };