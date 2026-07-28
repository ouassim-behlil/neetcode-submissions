class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for (int i=0; i < numbers.size(); i++) {
            int remaining = target - numbers[i];
            int j = i + 1;
            while (j < numbers.size()) {
                if (numbers[j] == remaining)
                    return {i + 1, j + 1};
                else if (numbers[j] > remaining)
                    break;
                else
                    j++;
            }
        }
        return {};
    }
};
