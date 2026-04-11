class Solution {
public:
    int trap(vector<int>& height) {
        int L = 0;
        int R = height.size() - 1;
        int totalWater = 0;
        int leftMax = 0; 
        int rightMax = 0;

        while(L < R) {
            leftMax = std::max(leftMax, height[L]);
            rightMax = std::max(rightMax, height[R]);

            if(leftMax < rightMax){
                totalWater += leftMax - height[L];
                L++;
            } else {
                totalWater += rightMax - height[R];
                R--;
            }
        }
        return totalWater;
    }
};
