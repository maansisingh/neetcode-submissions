class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxArr = 0;
        for(int i = 0; i < heights.size() - 1; ++i) {
            for(int j = 1; j < heights.size(); ++j) {
                int diff = abs(j - i);
                int minHeight = min(heights[i], heights[j]);
                int newMax = diff * minHeight;
                if(newMax > maxArr) {
                    maxArr = newMax;
                }
            }
        }
        return maxArr;
    }
};
