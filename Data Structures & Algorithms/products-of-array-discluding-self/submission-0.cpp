class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        std::vector<int> res;
        for(int i = 0; i < nums.size(); i++){
            int prod = 1;
            for(int j = 0; j < nums.size(); j++){
                if(j == i)
                    continue;
                prod *= nums[j];
            }
            res.push_back(prod);
        }
        return res;
    }
};
