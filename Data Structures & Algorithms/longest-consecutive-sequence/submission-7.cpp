class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxCount = 0;
        std::unordered_set<int> seq;

        for(auto &num : nums){
            seq.insert(num);
        }

        for(auto &num : nums){
            if(!seq.contains(num - 1)) //2 4 1 3 7 8
            {
                int count = 1;
                int curr = num;
                while(seq.contains(curr + 1)){
                    curr++;
                    count++;
                }
                if(count > maxCount){
                    maxCount = count;
                    count = 1;
                }
            }
        }
    return maxCount;
    }
};
