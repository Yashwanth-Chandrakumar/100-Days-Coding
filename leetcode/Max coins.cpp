class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maxCount = 0;
        int majorityElement = 0;
        std::unordered_map<int, int> countMap;

        for (int i = 0; i < nums.size(); ++i) {
            countMap[nums[i]] += 1;
        }

        for (const auto& pair : countMap) {
            if (pair.second > maxCount) {
                maxCount = pair.second;
                majorityElement = pair.first;
            }
        }
        return majorityElement;
    }
};
