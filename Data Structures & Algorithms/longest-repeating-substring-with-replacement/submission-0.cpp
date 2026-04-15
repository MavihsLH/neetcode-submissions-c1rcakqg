class Solution {
public:
    int characterReplacement(string &s, int k) {
        int left = 0;
        int maxFreq = 0;
        int count[26] = {0};
        int maxLength = 0;

        for(int right = 0; right < (int)s.size(); right++){
            count[s[right] - 'A']++;
            maxFreq = std::max(maxFreq, count[s[right] - 'A']);

            while((right - left + 1) - maxFreq > k)
            {
                count[s[left] - 'A']--;
                left++;
            }
            maxLength = std::max(maxLength, (right - left + 1));
        }
        return maxLength;
    }
};
