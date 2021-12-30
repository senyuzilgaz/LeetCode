class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int low, hi, sum;
        vector<int> solution, nums;
        low = 0;
        hi = arr.size()-1;
        nums = arr;
        
        insertionSort(arr);
        
        while(low < hi)
        {
            sum = arr[low] + arr[hi];
            
            if(sum == target)
            {
                break;
            }
            if(sum < target)
                ++low;
            
            else
                --hi;
        }        
        for(int i = 0; i< arr.size(); ++i)  
        {
            if(nums[i] == arr[low])
                solution.push_back(i);
            else if (nums[i] == arr[hi])
                solution.push_back(i);
        }
        return solution;
    }
    
    
    void insertionSort(vector<int>& arr)
    {
        int i, key, j;
        for (i = 1; i < arr.size(); i++)
        {
            key = arr[i];
            j = i - 1;

            while (j >= 0 && arr[j] > key)
            {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = key;
        }
    }
};