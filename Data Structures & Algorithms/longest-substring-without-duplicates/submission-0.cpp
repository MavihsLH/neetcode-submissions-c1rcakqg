class Solution {
public:
    int lengthOfLongestSubstring(string &s) {
        std::unordered_set<int> seen;
        int left = 0;
        int maxLength = 0;
        //zxyzxyz
        for(int right = 0; right < (int) s.size(); right++){
            
            while(seen.count(s[right])){ //zxy -> z
                seen.erase(s[left]);
                left++;
            }
            seen.insert(s[right]);
            maxLength = std::max(maxLength, (right - left + 1));
        }
        return maxLength;
    }
};
