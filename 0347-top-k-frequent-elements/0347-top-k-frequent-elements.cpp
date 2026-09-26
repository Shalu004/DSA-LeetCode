class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        int n=nums.size();
        for(auto& num: nums){
            freq[num]++;
        }
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> minHeap;
        for(auto& [num, count]: freq){
            minHeap.push({count, num}); //storing element in heap according to highest count
             if(minHeap.size() > k){
                minHeap.pop();         // keeping only k elements based on count
             }
        }
        vector<int> result;
        while (!minHeap.empty()){    // minHeap.empty() return boolean true or false based     o                                                   on elements are there in heap or not

           result.push_back(minHeap.top().second);   // second=num
           minHeap.pop();
        }
        return result;
    }
};