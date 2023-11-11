class Graph {
public:
    vector<vector<pair<int, int>>> adjacencyList;

    Graph(int n, vector<std::vector<int>>& edges) {
        adjacencyList.resize(n);
        for (auto edge : edges)
            adjacencyList[edge[0]].emplace_back(edge[1], edge[2]);
    }

    void addEdge(vector<int> edge) {
        adjacencyList[edge[0]].emplace_back(edge[1], edge[2]);
    }

    int shortestPath(int node1, int node2) {
        return dijkstra(node1, node2);
    }

private:
    int dijkstra(int start, int end) {
        int n = adjacencyList.size();
        vector<int> distances(n, INT_MAX);
        distances[start] = 0;

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> priorityQueue;
        priorityQueue.push({0, start});

        while (!priorityQueue.empty()) {
            int currentNode = priorityQueue.top().second;
            int currentCost = priorityQueue.top().first;
            priorityQueue.pop();

            if (currentCost > distances[currentNode])
                continue;

            if(currentNode == end)
                return currentCost ;

            for (auto edge : adjacencyList[currentNode]) {
                int neighbor = edge.first, edgeLength = edge.second;
                int newRouteCost = edgeLength + distances[currentNode];

                if (distances[neighbor] > newRouteCost) {
                    distances[neighbor] = newRouteCost;
                    priorityQueue.push({newRouteCost, neighbor});
                }
            }
        }

        return ((distances[end] == INT_MAX) ? -1 : distances[end]);
    }
};
