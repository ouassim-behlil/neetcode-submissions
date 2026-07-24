class Solution {
public:

    unordered_map<int, int> frequency(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            if (freq.find(num) != freq.end())
                freq[num] += 1;
            else
                freq[num] = 1;
        }
        return (freq);
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int> freq = frequency(nums);
        vector<vector<int>> backets(nums.size() + 1);
        
        for (auto [num, f]: freq) {
            backets[f].push_back(num);
        }

        vector<int> result;

        for (int i = backets.size() - 1; i > 0; i--) {
            for (int num: backets[i]) {
                result.push_back(num);
                if (result.size() == k)
                    return (result);
            }
        }
        return {};
    }
};
