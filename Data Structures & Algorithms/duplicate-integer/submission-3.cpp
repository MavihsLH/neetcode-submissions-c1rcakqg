class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> checklist;
        checklist.reserve(nums.size());
        for(const auto &num : nums){
            if(checklist.insert(num).second ==  false)
                return true;
        }
        return false;
    }
};