class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0, right = nums.size()-1;

        while(left<right){
            int mid = left +(right-left)/2;
            
            if(nums[mid] > nums[right]){//means minimum would be somewhere to the right of mid
                left = mid+1;
            }
            else{
                right = mid;
            }
        }
        return nums[left];
    }
};
