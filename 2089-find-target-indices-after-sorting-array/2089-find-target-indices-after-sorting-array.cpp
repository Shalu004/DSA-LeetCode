class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int sum =0, r=0;
        for(int a: nums){
            sum+=(a<target);
            r+=(a==target);
        }
        vector<int> ans(r);
        iota(ans.begin(), ans.end(), sum);
        return ans;
    }
};