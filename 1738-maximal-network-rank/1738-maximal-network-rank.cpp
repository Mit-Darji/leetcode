class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
       vector<int> count(n, 0);
       set<pair<int, int>> direct;
        
        for (auto& road : roads) {
            count[road[0]]++;
            count[road[1]]++;
            direct.insert({road[0], road[1]});
            direct.insert({road[1], road[0]});
        }

        int max_rank = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = i+1; j < n; ++j) {
                int rank = count[i] + count[j];
                if (direct.find({i, j}) != direct.end()) {
                    rank--;
                }
                max_rank = max(max_rank, rank);
            }
        }

        return max_rank;
    }
};