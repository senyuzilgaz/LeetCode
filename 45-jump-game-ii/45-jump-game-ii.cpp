class Solution {
public:
    int jump(vector<int>& nums) {
        int count = 0;
        int right = nums.size()-1;
        while(right > 0){
            for(int left = 0; left < right; ++left){
                if(nums[left] + left >= right){
                    right = left;
                    ++count;
                    break;
                }
            }
        }
        return count;
    }
};