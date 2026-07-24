from collections import defaultdict
class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        sorted_strs = [''.join(sorted(s)) for s in strs]
        maps = defaultdict(list)

        for i, s in enumerate(sorted_strs):
            maps[s].append(strs[i])

        return list(maps.values())