class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int maxArea = 0;
        for(int i  = 0; i < (int) heights.size(); i++)
        {
            int left = i;
            int right = i;

            while(left > 0 && heights[left - 1] >= heights[i]){
                left--;
            }
            while(right < (int)heights.size() - 1 && heights[right + 1] >= heights[i]){
                right++;
            }

            maxArea = std::max(maxArea, heights[i] * (right - left + 1));
        }
        return maxArea;
    }
};
