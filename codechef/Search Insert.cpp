class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                ans=i;
                return i;
            }
        }
        int count=0;
        if(ans==0){
            for(int i=0;i<nums.size();i++){
                if(nums[i]>target){
                    return i;
                    break;
                }
                count++;
            }
        }
        if(count==nums.size()){
            return nums.size();
        }
        return ans;
    }
};
