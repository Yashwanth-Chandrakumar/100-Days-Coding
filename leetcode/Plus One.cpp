class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }
        // If we reached this point, it means we have all 9s, so we need to add 1 to the front.
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
