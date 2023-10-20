#include <unordered_map> 
using namespace std; 

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,bool> umap;

        for (int num : nums) {
            if(umap[num])
                return true;
            umap[num] = true;
        }

        return false;
    }
};