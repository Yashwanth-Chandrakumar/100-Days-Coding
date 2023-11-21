class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();
        vector<string>ans;
        int arr[n];
        for(int i=0;i<n;i++){
            arr[i]=heights[i];
        }
        sort(arr,arr+n,greater<int>());
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(arr[i]==heights[j]){
                    ans.push_back(names[j]);
                }
            }
        }
        return ans;
    }
};
