class Solution {
public:
      bool wordPattern(string pattern, string s) {
        unordered_map<string, char> umap;
        vector<bool> visited(26, false);
        istringstream iss(s);
        string word;
        int unsigned i = 0;
        while(iss >> word){
            char ch = pattern[i];
            if(i == pattern.length()){
                  return false;            
            }
            else if(umap.find(word) != umap.end()){
                if(umap[word] != ch){
                     return false;                   
                }          
            }
            else{
                  if(visited[ch - 'a'])
                    return false;
                  visited[ch-'a'] = true;
                  umap[word] = ch;            
            }
            ++i;
        }
        if(i != pattern.length())
            return false;
        return true;
    }
};