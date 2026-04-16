class Solution {
public:
    string minWindow(string s, string t) 
    {
        std::vector<int> seen(128, 0); // a -> Z
        int minLen = INT_MAX;
        int left = 0;
        int sIndex = -1;
        int collected = 0;

        for(const auto &c : t) seen[c]++;

        for(int right = 0; right < s.size(); right++){

            if(seen[s[right]] > 0){
                collected++;
            }
            seen[s[right]]--;

            while(collected == t.size())
            {
                if(right - left + 1 < minLen){
                    minLen = right - left + 1;
                    sIndex = left;
                }

                seen[s[left]]++;

                if(seen[s[left]] > 0)
                {
                    collected--;
                }            
                left++;
            }
        }
        return sIndex == -1 ? "" : s.substr(sIndex, minLen);
    }
};
