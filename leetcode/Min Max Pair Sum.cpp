class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int left=0;
        int right = nums.size()-1;
        int maxx = INT_MIN;
        while(left<right){
            int curr = nums[left]+nums[right];
            maxx = max(maxx,curr);
            left++;
            right--;
        }
        return maxx;
    }
    
};
