class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        product = 1
        n = len(nums)
        n_zeros = 0

        for num in nums:
            if num == 0:
                n_zeros += 1
            else:
                product *= num
        
        if n_zeros > 1:
            return [0] * n
        
        result = [0] * n
        for i, num in enumerate(nums):
            if num == 0:
                result[i] = product
            elif n_zeros == 1:
                continue
            else:
                result[i] = product // num;


        return result
