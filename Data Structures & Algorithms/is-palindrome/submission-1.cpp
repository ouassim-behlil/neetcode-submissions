class Solution {
public:
    bool isPalindrome(string s) {
        int left;
        int right;
        
        left = 0;
        right = s.length() - 1;
        while (left < right) {
            while (!isalnum(static_cast<unsigned char>(s[left])))
                left++;
            while (!isalnum(static_cast<unsigned char>(s[right])))
                right--;
            if (left >= right)
                return (true);
            if (tolower(s[left]) != tolower(s[right]))
                return (false);
                
            left++;
            right--;
        }
        return (true);
    }
};
