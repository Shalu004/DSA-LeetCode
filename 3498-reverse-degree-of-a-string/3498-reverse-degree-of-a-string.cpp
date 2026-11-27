class Solution {
public:
    int reverseDegree(string s) {
        int reverse_degree = 0;
        for(int i = 0; i < s.length(); i++){
            reverse_degree += ('z' - s[i] + 1)*(i + 1);
        }
        return reverse_degree;
    }
};