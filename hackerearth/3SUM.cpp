class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        set<vector<int>>curr;
        int target=0;
        vector<vector<int>>result;
        for(int i=0;i<n;i++){
        int j=i+1;
        int k=n-1;
        while(j<k){
            int sum=nums[i]+nums[j]+nums[k];
            if(sum==target){
                curr.insert({nums[i],nums[j],nums[k]});
                j++;
                k--;
            }
            else if(sum<target){
                j++;
            }
            else{
                k--;
            }
        }
        }
        for(auto a:curr){
            result.push_back(a);
        }
        return result;
    }
};
