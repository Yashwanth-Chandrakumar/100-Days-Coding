Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.

Answer:
class Solution {
public:
    bool isPalindrome(int x) {
        long int m = x;
        long int a=0;
        long int rev;
        while(x>0){
            rev=x%10;
            a=a*10+rev;
            x=x/10;
        }
        if(m==a){
            return true;
        }
        else{
            return false;
        }
    }
};
