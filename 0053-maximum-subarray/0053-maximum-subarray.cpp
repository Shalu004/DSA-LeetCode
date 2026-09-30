class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum = INT_MIN;
        int currSum = 0;

        for(int val : nums){
            currSum += val;
            maxsum = max(maxsum, currSum);

            if(currSum < 0)
                currSum = 0;
        }
        return maxsum;
    }
};