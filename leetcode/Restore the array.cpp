class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        unordered_map<int, vector<int>> graph;

        for (const auto& pair : adjacentPairs) {
            graph[pair[0]].push_back(pair[1]);
            graph[pair[1]].push_back(pair[0]);
        }

        vector<int> result;

        for (const auto& entry : graph) {
            if (entry.second.size() == 1) {
                result = {entry.first, entry.second[0]};
                break;
            }
        }

        while (result.size() < adjacentPairs.size() + 1) {
            int last = result[result.size() - 1];
            int prev = result[result.size() - 2];
            const vector<int>& candidates = graph[last];
            int nextElement = (candidates[0] != prev) ? candidates[0] : candidates[1];
            result.push_back(nextElement);
        }

        return result; 
    }
};
