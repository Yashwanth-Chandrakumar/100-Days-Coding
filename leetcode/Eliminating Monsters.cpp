using namespace std;
class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int n = dist.size();
        vector<double>ans(n);
        for(int i=0;i<n;i++){
            ans[i] = static_cast<double>(dist[i])/speed[i];
        }
        sort(ans.begin(),ans.end());
        for(int i=0;i<n;i++){
            if(ans[i]<=i){
                return i;
            }
        }
        return n;
    }
};
