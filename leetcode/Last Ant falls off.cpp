class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int time=0;
        for(int a:left){
            time = max(time,a);
        }
        for(int b:right){
            time = max(time,n-b);
        }
        return time;
    }
};
