class Solution {
public:
    vector<int> maxDepthAfterSplit(auto& s) {
        int n = s.size(); 
        vector<int> ans(n);
        
        for (int i = 0; i < n; i++)
            ans[i] = (i^s[i]) & 1;

        return ans;
    }
};