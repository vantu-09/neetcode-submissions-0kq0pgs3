class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> s;
        heights.push_back(0);
        int maxk = 0;
        int n = heights.size();
        for (int i = 0; i < n; i++) {
            while (!s.empty() && heights[i] < heights[s.top()]) {
                int h = heights[s.top()]; 
                s.pop();
                int w = s.empty() ? i : i - s.top() - 1;
                maxk = max(maxk, h * w);
            }
            s.push(i);
        }
        return maxk;
    }
};