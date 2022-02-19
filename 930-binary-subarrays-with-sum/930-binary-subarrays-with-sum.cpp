class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atMostK(nums, goal) - atMostK(nums, goal-1);
    }
    
    int atMostK(vector<int> &array, int K){
        if(K < 0){
            return 0;
        }
        int size = array.size();
        int result = 0;
        int left = 0;
        int right = 0;
        int preSum = 0;
        
        for(int right = 0; right < size; ++right){
            preSum += array[right];
            while(preSum > K){
                preSum -= array[left];
                ++left;
            }
            int lengthOfSubarray = right - left + 1;
            result += lengthOfSubarray;
        }
        
        return result;
    }
};