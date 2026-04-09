class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int count = 1;
        int maxCount = 0;
        std::sort(nums.begin(), nums.end());
        if(nums.empty())
            return 0;
        if(nums.size() == 1)
            return 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] - nums[i - 1] == 1)
                count++;
            if(nums[i] == nums[i-1])
                continue;
            if(nums[i] != nums[i-1] && nums[i] - nums[i-1] != 1)
            {
                if(count > maxCount)
                    maxCount = count;
                count = 1;
            }
        }
        if(count > maxCount)
            maxCount = count;
        return maxCount;
    }
};
