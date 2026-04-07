class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<std::string, std::vector<std::string>> groups;
        for(const auto &s : strs){
            std::vector<int> freq(26, 0);
            for(const auto &c : s){
                freq[c - 'a']++;
            }
        
        std::string key = " ";
        for(int i = 0; i < 26; i++){
            key += std::to_string(freq[i]) + "#";
        }
        groups[key].push_back(s);
        }
        std::vector<std::vector<std::string>> result;
        for(const auto &[key, basket] : groups){
            result.push_back(basket);
        }
        return result;
    }
};
