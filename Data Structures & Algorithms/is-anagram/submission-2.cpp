class Solution {
public:
    bool isAnagram(string &s, string &t) {

        if(s.length() != t.length()){
            return false;
        }

        std::unordered_map<char, int> count;

        for(int i = 0; i < s.length(); i++){
            count[tolower(s[i])]++;
            count[tolower(t[i])]--;
        }

        for(const auto &[ch, cnt] : count){
            if(cnt != 0)
            {
                return false;
            }
        }
        return true;
    }
};
