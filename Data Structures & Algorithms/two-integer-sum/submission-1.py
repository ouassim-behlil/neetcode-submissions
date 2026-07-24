class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        maps = dict()

        for i, val in enumerate(nums):
            remaining = target - val
            if remaining in maps:
                return [maps[remaining], i]
            maps[val] = i
        
        return []