Monk being the monitor of the class needs to have all the information about the class students. He is very busy with many tasks related to the same, so he asked his friend Mishki for her help in one task. She will be given heights of all the students present in the class and she needs to choose 2 students having heights 
 and 
 respectively, such that 
 and difference between the number of students having height 
 and number of students having height 
 is maximum.

Note: The difference should be greater than 0.

Video approach to solve this question: here

As Mishki has never been a monitor of the class, help her in the same. If there exists such students, then print the required difference else print "1" (without quotes).

Input:
The first line will consists of one integer T, which denotes the number of test cases.
For each test case:
One line consists of a integer N, denotes the number of students in the class.
Second line contains N space separated integers, where 
 integer denotes the height of the 
 student in the class.

Output:

For each test case, if the required difference exists then print its value, otherwise print 1. Print the answer for each test case in a new line.

Constraints:



Sample Input
1
6
3 1 3 2 3 2
Sample Output
2
Explanation
Here T=1 and N = 6.

Number of students having height = 3 is 3.
Number of students having height = 2 is 2.

Answer:
import java.util.Scanner;

class MaxHeightDifference {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int T = scanner.nextInt();

        for (int t = 0; t < T; t++) {
            int N = scanner.nextInt();
            int[] heights = new int[N];

            for (int i = 0; i < N; i++) {
                heights[i] = scanner.nextInt();
            }

            int maxDiff = maxHeightDifference(heights);
            System.out.println(maxDiff);
        }
    }

    public static int maxHeightDifference(int[] heights) {
        int[] heightCounts = new int[101]; 

        for (int height : heights) {
            heightCounts[height]++;
        }

        int maxCount = 0;
        int minCount = Integer.MAX_VALUE;

        for (int count : heightCounts) {
            if (count > 0) {
                maxCount = Math.max(maxCount, count);
                minCount = Math.min(minCount, count);
            }
        }

        if (maxCount == minCount) {
            return 1; 
        } else {
            return maxCount - minCount; 
        }
    }
}
