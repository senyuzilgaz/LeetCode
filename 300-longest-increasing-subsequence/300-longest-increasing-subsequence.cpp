class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int len = nums.size();
        if(len < 2)
            return len;
        vector<int> memoize(len, 1);
        int result = 0;
        for(int i = 1; i < len; ++i){
            int j = i - 1;
            int maxSeq = 0;
            while(j >= 0){
                if(nums[j] < nums[i])
                    maxSeq = max(maxSeq, memoize[j]);
                --j;
            }
            memoize[i] = maxSeq + 1;
            result = max(result, memoize[i]);
        }
        return result;
    }
};