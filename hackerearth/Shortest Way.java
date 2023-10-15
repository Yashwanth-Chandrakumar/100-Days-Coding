The statement of this problem is quite short , apt and clear. We don't want any coder to spend time in reading a lengthy, boring story that has no connection with the actual problem.

The problem states:

Given a pair (1,1), your aim is to get a new pair (a,b) in minimum number of operations.

There are two types of operations you can use:

1.) If the pair is ( x , y ) then change it to ( x+y, y )

2.) If the pair is ( x , y ) then change it to ( x, x+y )

It is guaranteed that a and b are co-prime .

Input:

The first line contains the number of test cases T. Then, T lines follow, where each line contains a and b respectively.

Output:

Print a line containing the minimum number of operations required to achieve the given fraction, corresponding to each test case.

Constraints:

1 <= T <=10

1<= a,b <=1018

a and b are co-primes

Sample Input
2 
1 1
5 2
Sample Output
0 
3
  
Answer:

import java.util.*;

class TestClass {

    public static void main(String args[]) throws Exception {

        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while (t-- > 0) {

            long a = sc.nextLong();
            long b = sc.nextLong();
            long result = 0;

            while (a > 1 && b > 1) {
                if (a > b) {
                    result += a / b;
                    a = a % b;
                } else {
                    result += b / a;
                    b = b % a;
                }
            }

            if (a != 1) {
                result += a - 1;
            }

            if (b != 1) {
                result += b - 1;
            }

            System.out.println(result);
        }
    }
}
