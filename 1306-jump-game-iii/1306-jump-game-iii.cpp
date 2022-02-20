class Solution {
public:
    
    bool canReach(vector<int>& arr, int start) {
        vector<bool> visited(arr.size(), false);
        return helper(arr, start, visited);
        
    }
    bool helper(vector<int>& arr, int start, vector<bool> &visited){
        if(start < 0)     
            return false;
        if(start >= arr.size())
            return false;
        if(visited[start] == true)
            return false;
        visited[start] = true;
        if(arr[start] == 0)
            return true;
        return helper(arr, start + arr[start], visited) || helper(arr, start - arr[start], visited);
    }

};/*
public boolean canReach(int[] arr, int start) {
        int[] visited = new int[arr.length];
        return jumpGame(arr, start,visited); 
    }
     
   public boolean jumpGame(int[] arr, int start,int[] visited)
   {
       if(start >= arr.length)
            return false;
        
        if(start < 0)
            return false;
        
        if(arr[start] == 0)
            return true;
        
        if(visited[start] == 1)
            return false;
        
        visited[start] = 1;       
        return jumpGame(arr,start+arr[start],visited) || jumpGame(arr,start-arr[start],visited);
   }*/