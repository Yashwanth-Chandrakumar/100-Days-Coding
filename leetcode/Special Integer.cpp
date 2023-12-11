class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int,int>ans;
        for(int i=0;i<arr.size();i++){
            ans[arr[i]]++;
        }
        for(auto &x:ans){
            if(((double)x.second/arr.size())*100>25){
                return x.first;
            }
        }
        return 0;
    }
};
