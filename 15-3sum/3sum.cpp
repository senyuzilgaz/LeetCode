class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        unordered_map<double, bool> umap;
        int last = nums.size() - 1;
        for (int first = 0; first < nums.size() - 1; ++first) {
            int second = first + 1;
            int last = nums.size()-1;
            while (second < last) {
                int sum = nums[first] + nums[second] + nums[last];
                if (sum < 0) {
                    ++second;
                } else if (sum > 0) {
                    --last;
                } else {
                    double key = hash(nums[first], nums[second], nums[last]);
                    if (umap.find(key) == umap.end()) {
                        res.push_back({nums[first], nums[second], nums[last]});
                        umap[key] = true;
                    }
                    ++second;
                }
            }
        }

        return res;
    }

    double cantor(double a, double b) {
        return (a + b + 1) * (a + b) / 2 + b;
    }

    double hash(double a, double b, double c) {
        return cantor(a, cantor(b, c));
    }
};