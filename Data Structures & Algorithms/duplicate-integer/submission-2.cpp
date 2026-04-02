class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> checklist;
        checklist.reserve(nums.size());
        for(auto &num : nums){
            if(checklist.count(num) ==  1)
                return true;
            checklist.insert(num);
        }
        return false;
    }
};