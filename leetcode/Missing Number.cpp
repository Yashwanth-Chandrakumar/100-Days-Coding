class Solution {
public:
    int missingNumber(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int count=0;
            for(int j=0;j<nums.size();j++){
                if(i==nums[j]){
                    count++;
                }
            }
            if(count==0){
                return i;
                break;
            }
        }
        return nums.size();
    }
};
