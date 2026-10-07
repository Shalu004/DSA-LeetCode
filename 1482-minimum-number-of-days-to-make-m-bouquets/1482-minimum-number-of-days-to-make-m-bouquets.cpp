class Solution {
public:
    bool canMake(vector<int>& bloomDay, int day, int m, int k){
        int flowers=0;
        int bouquets=0;

        for(int bloom: bloomDay){
            if(bloom <= day){
                flowers++;

                if(flowers == k){      //flower count is same as flower required in each bouquet
                    bouquets++;
                    flowers=0;
                }
            }
            else{
                flowers=0;
            }
        }
        return bouquets >=m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        long long required = 1LL*m*k;

        if(required>bloomDay.size())
           return -1;

        int left = *min_element(bloomDay.begin(), bloomDay.end());
        int right = *max_element(bloomDay.begin(), bloomDay.end());

        while(left < right){
            int mid = left + (right - left)/2;

            if(canMake(bloomDay, mid, m, k)){
                right = mid;
            }
            else{
                left = mid+1;
            }
        }
        return left;
    }
};