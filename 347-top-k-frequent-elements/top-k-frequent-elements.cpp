#define fistik pair<int, int>

class Solution {
public:
    struct compare{
        bool operator()(fistik a, fistik b){
            return a.second < b.second;
        }
    };

    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<fistik, vector<fistik>, compare> pq;
        unordered_map<int, int> frequencies;
        vector<int> result;

        for (int num : nums)
            ++frequencies[num];
        for (auto pair : frequencies)
            pq.push({pair.first, pair.second});
        while (!pq.empty() && k--) {
            result.push_back(pq.top().first);
            pq.pop();
        }
            
        return result;

    }
};