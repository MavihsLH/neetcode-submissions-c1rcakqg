class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<std::string, std::vector<std::string>> groups;

        for(const auto &s : strs){
            std::string key = s;
            std::sort(key.begin(), key.end());
            groups[key].push_back(s);
        }

        std::vector<std::vector<std::string>> result;

        for(const auto &[key, basket] : groups){
            result.push_back(basket);
        }
        return result;
    }
};
