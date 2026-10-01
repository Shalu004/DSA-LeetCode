class Solution {
public:
        int firstocc(vector<int>& nums, int tar, int l, int h, int ans) {
        if (l>h)
            return ans;

        int mid = l + (h-l)/2;

        if (nums[mid]==tar) {
            ans = mid;
            return firstocc(nums, tar, l, mid-1, ans);
        }
        else if (nums[mid]<tar) {
            return firstocc(nums, tar, mid+1, h, ans);
        }
        else {
            return firstocc(nums, tar, l, mid-1, ans);
        }
    }

    int lastocc(vector<int>& nums, int tar, int l, int h, int ans) {
        if (l>h)
            return ans;

        int mid = l + (h-l)/2;

        if (nums[mid]==tar) {
            ans = mid;
            return lastocc(nums, tar, mid+1, h, ans);
        }
        else if (nums[mid] < tar) {
            return lastocc(nums, tar, mid+1, h, ans);
        }
        else {
            return lastocc(nums, tar, l, mid-1, ans);
        }
    }


    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();

        int first = firstocc(nums, target, 0, n - 1, -1);
        int last = lastocc(nums, target, 0, n - 1, -1);
        return {first,last};


        /*int flag=0;
        vector<int> result;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                result.push_back(i);
                flag++;
            }
        }
        
        if(flag){
            int n=result.size();
            return {result[0],result[n-1]};
        }
        return {-1,-1};
        */


    }
};