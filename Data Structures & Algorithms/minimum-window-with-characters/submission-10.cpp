class Solution {
public:
    string minWindow(string s, string t) {
        int minLen = INT_MAX;
        int sIndex = -1;

        if(t.size() > s.size())
            return "";

        for(int i = 0; i < s.size(); i++){
            int collected = 0;
            std::unordered_map<char, int> seen;
            for(const auto &c : t)
            {
                seen[c]++;
            }
            for(int j = i; j < s.size(); j++){ 

                if(seen.count(s[j])){
                    if(seen[s[j]] > 0){
                        collected++;
                    }
                    seen[s[j]]--;
                }

                if(collected == t.size()){
                    if(j - i + 1 < minLen)
                    {
                        minLen = j - i + 1;
                        sIndex = i;
                    }
                    break;
                }
            }
        }
        return sIndex == -1 ? "" : s.substr(sIndex, minLen);
    }
};
