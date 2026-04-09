class Solution {
public:
    int maxArea(vector<int>& heights) {
        int L = 0;
        int R = heights.size() - 1;
        int maxArea = 0;

        while (L < R){
            int h = std::min(heights[L], heights[R]);

            maxArea = std::max(maxArea, h * (R - L));

            if(heights[L] < heights[R]){
                L++;
            } else {
                R--;
            }
        }
        return maxArea;
    }
};
