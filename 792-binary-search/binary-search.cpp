class Solution {
public:
    int search(vector<int>& nums, int target) {
        return searchHelper(nums, target, 0, nums.size() - 1);
    }
    
    int searchHelper(vector<int>& nums, int target, int begin, int end) {
        if (end < begin) 
            return -1;

        int mid = (end + begin) / 2;
        int current = nums[mid];

        if (current == target)
            return mid;
        if (current > target)
            return searchHelper(nums, target, begin, mid - 1);
        if (current < target)
            return searchHelper(nums, target, mid + 1, end);

        return -1;
    }
};