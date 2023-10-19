Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
Example 3:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.

Answer:
class Solution {
public:

    int lengthOfLongestSubstring(string s) {
    unordered_set<char> st;
    int n = s.size();
    int len = 0;
    int l = 0;

    for (int r = 0; r < n; r++) {
        if (st.count(s[r]) == 0) {
            st.insert(s[r]);
            len = max(len, r - l + 1);
        } else {
            while (st.count(s[r])) {
                st.erase(s[l]);
                l++;
            }
            st.insert(s[r]);
        }
    }
    return len;
}

};
