class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image.size() < 1)
            return image;
        vector<vector<bool>> visited;
        stack<pair<int,int>> st;
        int current = image[sr][sc];
        
        for(int i = 0; i < image.size(); ++i){
            vector<bool> row;
            for(int j = 0; j < image[0].size(); ++j){
                row.push_back(false);
            }
            visited.push_back(row);
        }
        
        st.push({sr,sc});
        while(!st.empty()){
            pair<int,int> currentPair = st.top();
            st.pop();
            image[currentPair.first][currentPair.second] = color;
            visited[currentPair.first][currentPair.second] = true;
            getNeighbours(currentPair.first, currentPair.second, visited, image, current, st);
        }
        
        return image;
    }
    
    vector<pair<int, int>> getNeighbours(int i, int j, vector<vector<bool>> &visited, vector<vector<int>> image, int current, stack<pair<int,int>> &sta){
        vector<pair<int, int>> neigh;
        int height = visited.size()-1;
        int width = visited[0].size()-1;
        
        if(i+1 <= height && image[i+1][j] == current && !visited[i + 1][j])
            sta.push({i+1, j});
        if(i-1 >= 0 && image[i-1][j] == current && !visited[i - 1][j])
            sta.push({i-1, j});
        if(j+1 <= width && image[i][j+1] == current && !visited[i][j + 1])
            sta.push({i, j+1});
        if(j-1 >= 0 && image[i][j-1] == current && !visited[i][j - 1])
            sta.push({i, j-1});
        
        return neigh;
        
    }
};