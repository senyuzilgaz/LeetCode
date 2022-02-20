class Solution {
public:
    int jump(vector<int>& nums) {
        int count = 0;
        int lastJumpIndex = 0;
        int maxJumpIndex = 0; 
        if(nums.size() < 2)
            return 0;
        for(int i = 0; i < nums.size(); ++i){

            maxJumpIndex = max(nums[i] + i, maxJumpIndex);
            
            if(i == lastJumpIndex){
                lastJumpIndex = maxJumpIndex;
                ++count;
                if(maxJumpIndex >= nums.size()-1)
                    return count;
            }
        }
        return count;
    }
};