class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        long long even=1;
        long long odd=0;
        long long pSum = 0;
        long long MOD = 1e9 + 7;

        for(int a :arr) {
            pSum += a;

            if(pSum % 2) odd++;
            else even++;
        }

        return (even * odd) % MOD;
    }
};