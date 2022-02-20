class Solution {
public:
    
    bool canReach(vector<int>& arr, int start) {
        vector<bool> visited(arr.size(), false);
        return helper(arr, start, visited);
        
    }
    bool helper(vector<int>& arr, int start, vector<bool> &visited){
        if( !(start >= 0 && start < arr.size()) )
            return false;
        if(visited[start] == true)
            return false;
        visited[start] = 1;
        

        return arr[start] == 0
            || helper(arr, start + arr[start], visited)
            || helper(arr, start - arr[start], visited);
     
    }

};
