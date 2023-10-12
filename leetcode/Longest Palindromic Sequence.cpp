Given a string s, return the longest 
palindromic
 
substring
 in s.

 

Example 1:

Input: s = "babad"
Output: "bab"
Explanation: "aba" is also a valid answer.
Example 2:

Input: s = "cbbd"
Output: "bb"
 

Constraints:

1 <= s.length <= 1000
s consist of only digits and English letters.

Answer:
#include<iostream>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        string longest;
        
        if (n == 0) {
            return "";
        }

        int start = 0;
        int maxLength = 1;

        for (int i = 0; i < n; i++) {
           
            int left = i;
            int right = i;
            while (left >= 0 && right < n && s[left] == s[right]) {
                if (right - left + 1 > maxLength) {
                    start = left;
                    maxLength = right - left + 1;
                }
                left--;
                right++;
            }

            left = i;
            right = i + 1;
            while (left >= 0 && right < n && s[left] == s[right]) {
                if (right - left + 1 > maxLength) {
                    start = left;
                    maxLength = right - left + 1;
                }
                left--;
                right++;
            }
        }

        longest = s.substr(start, maxLength);
        return longest;
    }
};
