class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int closest = INT_MAX;
        int Sum = 0;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size()-2; ++i){
            int left = i + 1;
            int right = nums.size()-1;
            while(left < right){
                int sum = nums[i] + nums[left] + nums[right];
                if(abs(target-sum) < closest){
                    closest = abs(target-sum);
                    Sum = sum;
                }
                if(sum < target)
                    ++left;
                else if (sum > target)
                    --right; 
                else
                    return target;
            }
        }
        
        return Sum;
    }
};