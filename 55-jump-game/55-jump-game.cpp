class Solution {
public:
    bool canJump(vector<int>& nums) {
        int distance = 0;
        int fuel = nums.size() >= 1 ? nums[0] + 1 : 0;
        int i;
        for(i = 0; i < nums.size() && fuel > 0; ++i, --fuel){
            fuel = max(fuel, nums[i] + 1);
        }
        cout << i;
        return i >= nums.size();
    }
};