class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> m;        //map that will store next greater for each element of nums2
        stack<int> s;

        for(int i=nums2.size()-1; i>=0 ;i--){

            while(s.size() > 0 && s.top() <= nums2[i]){     //nums[i] se bda elements jab tk nhi milta, 
                s.pop();      //pop the top most element
            }

            if(s.empty()){
                m[nums2[i]]=-1;      // agar pop karke empty hogya matlab there exist no next greater
            }
            else{
                m[nums2[i]]=s.top();    // else put the next greater in map
            }
            s.push(nums2[i]);          // keep putting the the element of nums2 in stack
        }

        vector<int> ans;
        for(int i=0; i<nums1.size(); i++){
            ans.push_back(m[nums1[i]]);       //find the next greater for element in nums1 in nums2 using map
        }
        
        return ans;
    }
};