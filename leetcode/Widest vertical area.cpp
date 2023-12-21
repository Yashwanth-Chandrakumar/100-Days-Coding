class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int>ans;
        for(auto &x:points){
            for(auto &v:x){
                ans.push_back(v);
                break;
            }
        }
        sort(ans.begin(),ans.end());
        int diff=ans[1]-ans[0];
        for(int i=1;i<ans.size()-1;i++){
            if(diff<ans[i+1]-ans[i]){
                diff=ans[i+1]-ans[i];
            }
        }
        return diff;
    }
};
