class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> maps;
        vector<string> sorted(strs.size(), "");

        for (int i = 0; i < strs.size(); i++) {
            sorted[i] = strs[i];
            sort(sorted[i].begin(), sorted[i].end());
        }

        for (int i=0; i < strs.size(); i++){
            if (maps.find(sorted[i]) != maps.end())
                maps[sorted[i]].push_back(strs[i]);
            else 
                maps[sorted[i]] = {strs[i]};
        }
        vector<vector<string>> result;

        for (auto &p: maps) {
            result.push_back(p.second);
        }
        return (result);
    }
};
