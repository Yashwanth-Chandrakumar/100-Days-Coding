class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int ans = 0;
        for(int i = 0 ; i < points.size()-1; i++)
        {
            int first = 0;
            int second = 0;
            if (points[i][0] < 0 && points[i+1][0] < 0)
                first = abs( abs(points[i][0]) - abs(points[i+1][0]));
            else if(points[i][0] < 0 || points[i+1][0] < 0)
                first = abs( abs(points[i][0]) + abs(points[i+1][0]));
            else
                first = abs( abs(points[i][0]) - abs(points[i+1][0]));
            
            if(points[i][1] < 0 && points[i+1][1] < 0)
                second = abs( abs(points[i][1]) - abs(points[i+1][1]));
            else if(points[i][1] < 0 || points[i+1][1] < 0)
                second = abs( abs(points[i][1]) + abs(points[i+1][1]));
            else
                second = abs( abs(points[i][1]) - abs(points[i+1][1]));
            ans += max(first,second);
        }
        return ans;
    }
};
