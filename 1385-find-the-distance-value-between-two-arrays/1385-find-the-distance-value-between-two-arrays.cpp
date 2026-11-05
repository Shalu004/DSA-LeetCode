class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int c = 0;
        for (auto& x : arr1) {
            bool ok = true;
            for (auto& y : arr2) {
                ok &= (abs(x - y) > d);
            }
            c += ok;
        }
        return c;
    }
};