class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftSum = 0;
        int sum = 0;
        vector<int> leftSums;

        for(int i = 0; i < nums.size(); ++i){
            sum += nums[i];
        }
        
        for(int i = 0; i < nums.size(); ++i){
            int rightSum = sum - leftSum - nums[i];
            if(rightSum == leftSum)
                return i;
            leftSum += nums[i];
        }
        return -1;
    }
};