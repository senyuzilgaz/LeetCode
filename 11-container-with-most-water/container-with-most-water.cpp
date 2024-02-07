class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int result = 0;
        while (left < right) {
            int current = min(height[left], height[right]) * (right - left);
            if (current > result)
                result = current;
            if (height[left] > height[right])
                --right;
            else
                ++left;
        }

        return result;
    }
};