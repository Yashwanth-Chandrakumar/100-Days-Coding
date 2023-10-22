Example 1:

Input: s = "Hello World"
Output: 5
Explanation: The last word is "World" with length 5.
Example 2:

Input: s = "   fly me   to   the moon  "
Output: 4
Explanation: The last word is "moon" with length 4.
Example 3:

Input: s = "luffy is still joyboy"
Output: 6
Explanation: The last word is "joyboy" with length 6.

Answer:
class Solution {
    public int lengthOfLastWord(String s) {
        String arr[];
        arr = s.split(" ");
        int n = arr.length;
        return arr[n-1].length();
    }
}
