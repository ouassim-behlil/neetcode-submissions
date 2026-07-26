class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr_sum = 0;
        int max_sum = nums[0];

        for (int &num: nums) {
            curr_sum = max(curr_sum, 0);
            curr_sum += num;
            max_sum = max(max_sum, curr_sum);
        }
        return (max_sum);
    }
};
