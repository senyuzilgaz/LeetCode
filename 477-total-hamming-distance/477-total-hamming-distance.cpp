class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int max = 0;
        int len = nums.size();
        long distance = 0;
        for(int num : nums)
            if(num > max)
                max = num;
        int zeroCount = 0;
        int oneCount = 0;
        while(max > 0){
            for(int i = 0; i < len; ++i){
                if(nums[i]&1)
                    oneCount++;
                else
                    zeroCount++;
                nums[i] = nums[i] >> 1;
            }
            max = max >> 1;
            distance += zeroCount * oneCount;
            zeroCount &= 0;
            oneCount &= 0;
        }
        return distance;
    }
};