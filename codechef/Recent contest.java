CodeChef recently revamped its practice page to make it easier for users to identify the next problems they should solve by introducing some new features:

Recent Contest Problems - Contains only problems from the last 2 contests
Separate Un-Attempted, Attempted, and All tabs
Problem Difficulty Rating - The Recommended dropdown menu has various difficulty ranges so that you can attempt the problems most suited to your experience
Popular Topics and Tags
Chef has been participating regularly in rated contests but missed the last two contests due to his college exams. He now wants to solve them and so he visits the practice page to view these problems.

Given a list of 
�
N contest codes, where each contest code is either START38 or LTIME108, help Chef count how many problems were featured in each of the contests.

Input Format
First line will contain 
�
T, number of test cases. Then the test cases follow.
Each test case contains of two lines of input.
First line of input contains the total count of problems that appeared in the two recent contests - 
�
N.
Second line of input contains the list of 
�
N contest codes. Each code is either START38 or LTIME108, to which each problem belongs.
Output Format
For each test case, output two integers in a single new line - the first integer should be the number of problems in START38, and the second integer should be the number of problems in LTIME108.

Constraints
1
≤
�
≤
10
1≤T≤10
1
≤
�
≤
1000
1≤N≤1000
Each of the contest codes will be either START38 or LTIME108.
Sample 1:
Input
Output
4
3
START38 LTIME108 START38
4
LTIME108 LTIME108 LTIME108 START38
2
LTIME108 LTIME108
6
START38 LTIME108 LTIME108 LTIME108 START38 LTIME108
2 1
1 3
0 2
2 4

Answer:
/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		for(int i=0;i<n;i++){
		    int a = sc.nextInt();
		    sc.nextLine();
		    String arr[]=new String[a];
		    for(int j=0;j<a;j++){
		        arr[j]=sc.next();
		    }
		    int count[]=new int[2];
		    for(int j=0;j<a;j++){
		        if(arr[j].equals("START38")){
		            count[0]+=1;
		        }
		        else{
		            count[1]+=1;
		        }
		    }
		    System.out.println(count[0]+" "+count[1]);
		}
	}
}
