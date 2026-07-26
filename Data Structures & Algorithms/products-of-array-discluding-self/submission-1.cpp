class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1;
        int n_zeros = 0;
        for (int &num: nums){
            if (num == 0)
                n_zeros++;
            else
                product *= num;
        }
        vector<int> result(nums.size(), 0);
        if (n_zeros > 1)
            return (result);
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] == 0)
                result[i] = product;
            else if (n_zeros == 1)
                continue ;
            else
                result[i] = product / nums[i];
        }
        return (result);
    }
};
