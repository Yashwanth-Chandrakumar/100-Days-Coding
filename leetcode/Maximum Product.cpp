class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1=0;
        int max1val=0;
        int max2=0;
        int max2val=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max1val){
                max1val=nums[i];
                max1=i;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max2val){
                if(i!=max1){
                max2val=nums[i];
                max2=i;
                }
            }
        }
        return (max1val-1)*(max2val-1);
    }
};
