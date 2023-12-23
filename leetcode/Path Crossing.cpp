class Solution {
public:
    bool isPathCrossing(string path) {
        int x = 0, y = 0;
        unordered_set<int> visited;
        visited.insert(0);

        for (char direction : path) {
            if (direction == 'N') {
                y++;
            } else if (direction == 'S') {
                y--;
            } else if (direction == 'E') {
                x++;
            } else if (direction == 'W') {
                x--;
            }

            int currentPoint = x * 10000 + y; // Using a unique representation for each point
            if (visited.find(currentPoint) != visited.end()) {
                return true;
            }

            visited.insert(currentPoint);
        }

        return false;
    }
};
