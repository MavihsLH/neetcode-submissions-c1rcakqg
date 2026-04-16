class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        if(s1.size() > s2.size())
            return false;

        std::vector<int> target(26, 0);
        std::vector<int> window(26, 0);

        for(int i = 0; i < s1.size(); i++)
        {
            target[s1[i] - 'a']++; //1 - 1 2 - 1 3 - 1
            window[s2[i] - 'a']++; // lecabee -> 
        }

        for(int right = s1.size(); right < s2.size(); right++){
            if(target == window)
                return true;
            
            window[s2[right] - 'a']++;
            window[s2[right - s1.size()] - 'a']--;
        }
    return target == window;
    }
};
