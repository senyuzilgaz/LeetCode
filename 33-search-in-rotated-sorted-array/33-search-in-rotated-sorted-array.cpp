class Solution {
public:
    int search(vector<int>& nums, int target) {

        int left = 0;
        int right = nums.size()-1;
        int comperator;
        while(left <= right){
            int mid = (left + right)/2;
            int comperator = nums[mid];
            if( (nums[mid] < nums[0]) == (target < nums[0]) ){
                comperator = nums[mid];
            }
            else{
                if(target >= nums[0])
                    comperator = INT_MAX;
                else
                    comperator = INT_MIN;
            }
            if(target == comperator)
                return mid;
            if(target > comperator){
                left = mid + 1;
            }else{
                right = mid - 1;
            }
        }
        return -1;
    }
};