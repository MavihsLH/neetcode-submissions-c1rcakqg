class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int maxArea = 0;
        std::stack<int> s;
        heights.push_back(0);

        for(int i = 0; i < (int)heights.size(); i++)
        {
            while(!s.empty() && heights[i] < heights[s.top()])
            {
                int h = heights[s.top()];
                s.pop();

                int width = s.empty() ? i : i - s.top() - 1;
                maxArea = std::max(maxArea, h * width);
            }
        s.push(i);
        }
        return maxArea;
    }
};
