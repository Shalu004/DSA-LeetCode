class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int left=0, right=n-1;
        int maxarea=0;
        while(left<right){
            int h = min(height[left], height[right]);
            int w = right-left;
            maxarea = max(maxarea, h*w);

            if(height[left] < height[right]) left++;
            else right--; 
        }
        return maxarea;
    }
};