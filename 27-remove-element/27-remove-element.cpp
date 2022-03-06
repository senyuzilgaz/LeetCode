class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int right = nums.size()-1;
        int left = 0;
        int temp;
        while(left <= right){
            if(nums[left] == val){
                temp = nums[right];
                nums[right] = nums[left];
                nums[left] = temp;
                --right;
            }else{
                ++left;
            }
        }
        
        return left;
    }
};