class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        int first = 0;
        
        for(int first = 0; first < nums.size()-1; ++first){
            
            int second = first + 1;
            int last = nums.size()-1;
            while(second < last)
            {
                int sum = nums[first] + nums[second] + nums[last];
                if(sum == 0){
                    vector<int> triplet = {nums[first], nums[second], nums[last]};
                    res.push_back(triplet);
                    while(second < last && nums[second] == triplet[1])
                        ++second;
                    while(second < last && nums[last] == triplet[2])
                        --last;
                }
        
                else if(sum < 0){  
                    ++second;
                }
                else
                    --last;
            } 
            while(first < nums.size()-1 && nums[first+1] == nums[first])
                ++first;
        }

        return res;
    }
};