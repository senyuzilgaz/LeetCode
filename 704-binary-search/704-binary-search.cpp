class Solution {
public:
    int search(vector<int>& nums, int target){
        int left = 0, right = nums.size() - 1;
        int mid = (left + right) / 2;
        
        while(left <= right){
            int num = nums[mid];
            
            if(num == target)
                return mid;
            else if(num < target)
                left = mid + 1;
            else if(num > target)
                right = mid - 1;
            mid = (left + right) / 2;
        }
        
        return -1;
    }
};