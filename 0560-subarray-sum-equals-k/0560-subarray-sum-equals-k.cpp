class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {    //Hash Map with Prefix Sums
        map<int, int>freq;
        freq[0]=1;
        int prefix=0, count=0;
        for(int i=0;i<nums.size();i++){
            prefix +=nums[i];                     // sum = sum+nums[i]
            count +=freq[prefix-k];               // sum - k ==0 , freq[0]=1, count = count+1
            freq[prefix]++;
        }
        return count;
    }
};

/*
freq[prefix]++; EXPLAINED
Array: nums = [1, 2, 3], k = 3

Iteration:
i	num	prefix	prefix - k	freq[prefix - k]	count	freq map
0	1	  1	          -2	           0	       0	{0:1, 1:1}
1	2	  3            0	           1 ✅	      1	   {0:1, 1:1, 3:1}
2	3	  6	           3	           1 ✅	      2	   {0:1, 1:1, 3:1, 6:1}

Return: 2 subarrays with sum = 3 ([1,2] and [3])
*/