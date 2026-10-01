class Solution {
public:
    int search(vector<int>& nums, int target) {
        int mid,low,high,flag=0;
        int n=nums.size();
        //sort(nums.begin(),nums.end());
        low=0;
        high=n-1;
        while(low<=high){
            mid=low+(high-low)/2;
            if(target==nums[mid]){
                flag=1;
                break;
            }
            else if(target<nums[mid]){
                high=mid-1;
            }
            else if(target > nums[mid]){
                low=mid+1;
            }
        }
        if(flag) return mid;
        else return -1;
    }
};