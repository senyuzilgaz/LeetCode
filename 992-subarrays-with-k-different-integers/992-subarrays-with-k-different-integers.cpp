class Solution {
public:
int subarraysWithKDistinct(vector<int>& A, int K, int res = 0) {
    return atMostK(A, K) - atMostK(A, K-1);
}
    
int atMostK(vector<int> &array, int K){
    int result = 0;
    int left = 0;
    int uniqueIntegers = 0;
    
    unordered_map<int, int> count;
    for(int right = 0; right < array.size(); ++right){
        int newNumber = array[right];
        if(count[newNumber] == 0){
            uniqueIntegers ++;
        }
        count[newNumber]++;
        while(uniqueIntegers > K){
            int leftMostNumber = array[left];
            count[leftMostNumber]--;
            if(count[leftMostNumber] == 0){
                uniqueIntegers--;
            }
            left++;
        }
        int lengthOfSubarray = right - left + 1;
        result += lengthOfSubarray;
    }
    return result;
}
};

