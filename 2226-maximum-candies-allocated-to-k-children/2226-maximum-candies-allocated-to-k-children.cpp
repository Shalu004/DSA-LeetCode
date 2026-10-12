class Solution {
public:
    bool canAllocate(vector<int>& candies, int mid, long long k){
        long long children = 0;

        for(int piles: candies){
            children += piles/mid;
        }
        return children >= k;
    }
    int maximumCandies(vector<int>& candies, long long k) {
        int left = 1;
        int right = *max_element(candies.begin(), candies.end());
        int ans = 0;
        while(left <= right){
            int mid = left + (right - left)/2;

            if(canAllocate(candies, mid, k)){
                ans = mid;
                left = mid+1;  // we need max
        }
            else{
                 right = mid-1;
            }
        }
        return ans;
    }
};