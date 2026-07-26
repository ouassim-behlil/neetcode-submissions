class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans = 0;
        int i = 0;
        while (i < nums.size()) {
            int j = i + 1;
            int duplicates = 0;
            while (j < nums.size() && (nums[j] == nums[j-1] + 1 || nums[j] == nums[j-1])){
                if (nums[j] == nums[j-1])
                    duplicates++;
                j++;
            }
            int length = j - i - duplicates;
            ans = max(ans, length);
            i = j;
        }
        return (ans);
    }
};
