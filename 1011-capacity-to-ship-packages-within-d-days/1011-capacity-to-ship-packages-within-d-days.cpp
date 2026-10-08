class Solution {
public:

    bool canShip(vector<int> &weights, int days, int capacity){
        int currentweight = 0;
        int day=1;

        for(int w: weights){

            if(currentweight + w <= capacity){
                currentweight += w;
            }

            else {
                day++;
                currentweight = w;
            }
        }
        return day<=days;
        
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int left = *max_element(weights.begin(), weights.end());
        int right = 0;
        for(int w: weights)
            right += w;

        while(left < right){
            int mid = left + (right - left)/2;

            if(canShip(weights, days, mid)){
               right = mid;
            }
            else{
               left = mid+1;
            }
        }
        return left;
    }
};