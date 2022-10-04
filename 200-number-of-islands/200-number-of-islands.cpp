class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        if(grid.size() < 1)
            return 0;
        int num = 0;
        
        vector<vector<bool>> visited;
        stack<pair<int,int>> st;
        
        for(int i = 0; i < grid.size(); ++i){
            vector<bool> row;
            for(int j = 0; j < grid[0].size(); ++j)
                row.push_back(false);
            visited.push_back(row);
        }
        
        for(int i = 0; i < grid.size(); ++i){
            for(int j = 0; j < grid[0].size(); ++j){
                if(visited[i][j])
                    continue;
                
                if(grid[i][j] == '1'){
                    st.push({i, j});
                    bfs(st, grid, visited);
                    ++num;
                }
            }
        }
        return num;
    }
    void bfs(stack<pair<int, int>> &st, vector<vector<char>>& grid, vector<vector<bool>>&                                                                                       visited){
        while(!st.empty()){
            pair<int, int> current = st.top();
            visited[current.first][current.second] = true;
            st.pop();
            getNeighbours(current.first, current.second, visited, grid, st);
        }
    }
    
    void getNeighbours(int i, int j, vector<vector<bool>> &visited,vector<vector<char>> &grid, stack<pair<int, int>> & st){
        int height = grid.size();
        int width = grid[0].size();
        
        
        if(i + 1 < height && !visited[i + 1][j] && grid[i + 1][j] == '1'){
            visited[i + 1][j] = true;
            st.push({i+1, j});
        }
        if(i - 1 >= 0 && !visited[i - 1][j] && grid[i - 1][j] == '1'){
            visited[i - 1][j] = true;
            st.push({i-1, j});
        }
        if(j + 1 < width && !visited[i][j + 1] && grid[i][j + 1] == '1'){
            visited[i][j + 1] = true;
            st.push({i, j + 1});
        }
        if(j - 1 >= 0 && !visited[i][j - 1] && grid[i][j - 1] == '1'){
            visited[i][j - 1] = true;
            st.push({i, j - 1});
        }
    }
};