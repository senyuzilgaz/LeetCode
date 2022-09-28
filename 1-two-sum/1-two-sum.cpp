class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> cache;
        for(int i = 0; i < nums.size(); ++i)
        {
            int first = nums[i];
            if(cache.find(first) == cache.end())
                cache[target - first] = i;
            else
                return{cache[first], i};
            
        }
        return{0,0};
    }
};