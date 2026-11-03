class Solution {
public:
    int minMoves(vector<int>& nums) {
        long long int sum = 0;
        for(auto i: nums) {
            sum += i;
        }
        int maximum = *max_element(nums.begin(), nums.end());
        return nums.size()*maximum - sum;
    }
};