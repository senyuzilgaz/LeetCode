class Solution {
public:
    
    bool canReach(vector<int>& arr, int start) {
        vector<bool> visited(arr.size(), false);
        return helper(arr, start, visited);
        
    }
    bool helper(vector<int>& arr, int start, vector<bool> &visited){
        if( start >= arr.size() )
            return false;
        if( start < 0)
            return false;
        if(visited[start] == true)
            return false;
        visited[start] = 1;
        
        if( (start < arr.size()) && (start >=0)){
            return arr[start] == 0
                    || helper(arr, start + arr[start], visited)
                    || helper(arr, start - arr[start], visited);
        }
        
        return false;        
    }

};
