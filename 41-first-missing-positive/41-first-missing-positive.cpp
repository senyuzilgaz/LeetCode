class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int highest = 0;
        unordered_map<int, bool> meta;
        for(int i : nums){
            if(i <= 0)
                continue;
            meta[i] = true;
            highest = max(highest, i);
        }    
        for(int i = 1; i < nums.size() + 1; ++i)
            if(meta[i] == false)
                return i;

        return highest + 1;
    }
};