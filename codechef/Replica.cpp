class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>ans;
        for(int i=0;i<nums.size();i++){
            ans[nums[i]]+=1;
        }
        for(const auto&pair : ans){
            if(pair.second>1){
                return true;
                break;
            }
        }
        return false;

    }
}
