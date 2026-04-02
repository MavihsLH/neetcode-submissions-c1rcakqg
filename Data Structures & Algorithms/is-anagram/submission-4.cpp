class Solution {
public:
    bool isAnagram(string &s, string &t) {

        if(s.length() != t.length()){
            return false;
        }

        int counts[26] = {0};

        for(int i = 0; i < s.length(); i++){
            counts[tolower(s[i]) - 'a']++;
            counts[tolower(t[i]) - 'a']--;
        }

        for(const auto &count : counts){
            if(count != 0){
                return false;
            }
        }
        return true;
    }
};
