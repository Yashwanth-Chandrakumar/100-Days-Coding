class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {
        if (source == target) {
            return 0;
        }

        int maxStop = -1;
        for (const auto& route : routes) {
            for (int stop : route) {
                maxStop = max(maxStop, stop);
            }
        }

        if (maxStop < target) {
            return -1;
        }

        int n = routes.size();
        vector<int> minBusesToReach(maxStop + 1, INT_MAX);
        minBusesToReach[source] = 0;

        bool flag = true;
        while (flag) {
            flag = false;
            for (const auto& route : routes) {
                int min = n+1;
                for (int stop : route) {
                    min = std::min(min, minBusesToReach[stop]);
                }
                min++;
                for (int stop : route) {
                    if (minBusesToReach[stop] > min) {
                        minBusesToReach[stop] = min;
                        flag = true;
                    }
                }
            }
        }

        return (minBusesToReach[target] < n+1) ? minBusesToReach[target] : -1;
    }
};
