class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1; //minimum possible eating speed
        int right  = *max_element(piles.begin(), piles.end());   // max possible speed

        while(left<right){
            int mid = left + (right - left)/2;
            long long hours = 0;

            for(int bananas: piles){
                hours += (bananas + mid - 1)/mid;   //this formula for rounding up instead down
            }
            if(hours <= h)
                right = mid;   //to find minimun hrs required
            else
                left = mid + 1;
        }
        return left;
    }
};