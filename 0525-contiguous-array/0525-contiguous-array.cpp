class Solution {
public:
    int findMaxLength(vector<int>& nums) { // treating 1s = 1 and 0s = -1
        unordered_map<int, int> freq;
        int maxlen=0,sum=0;
        freq[0]=-1;
        for(int i=0; i<nums.size();i++){
            sum += (nums[i]==1? 1:-1);

            if(freq.find(sum) != freq.end()){
                maxlen = max(maxlen, i-freq[sum]);
            }else{
                freq[sum]=i;
            }
        }
        return maxlen;
    }
};
//EXPLAINATION: https://chatgpt.com/s/t_6864ca1be4a8819198aca53b131c3b67