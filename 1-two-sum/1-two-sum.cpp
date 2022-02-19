class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        unordered_map<int,int> isSeen;
        for(int i = 0; i < arr.size(); ++i){
            int number = arr[i];
            if(isSeen.find(target-number) == isSeen.end()){
                isSeen[number] = i;
            }else {
                return{isSeen[target - number], i};
            }
        }
        return {-1, -1};
    }
    
};