class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> umap;
        for (int i = 0; i < nums.size(); ++i) {
            int num = nums[i];
            if(umap.find(target - num) != umap.end())
                return {i, umap[target - num]};
            umap[num] = i;
        }

        return {-1, -1};
    }
};