class KthLargest {
public:
    vector<int> numbers;
    int kth;
    KthLargest(int k, vector<int>& nums) {
        kth = k;
        numbers = nums;
    }
    
    int add(int val) {
        numbers.push_back(val);
        sort(numbers.begin(), numbers.end());
        return (numbers[numbers.size() - kth]);
    }
};
