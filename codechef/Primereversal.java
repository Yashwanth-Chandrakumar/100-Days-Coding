You are given two binary strings 
�
A and 
�
B, each of length 
�
N. You can perform the following operation on string 
�
A any number of times:

Select a prime number 
�
X.
Choose any substring of string 
�
A having length 
�
X and reverse the substring.
Determine whether you can make the string 
�
A equal to 
�
B using any (possibly zero) number of operations.

A substring is obtained by deleting some (possibly zero) elements from the beginning and some (possibly zero) elements from the end of the string.

Input Format
The first line of input will contain a single integer 
�
T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains an integer 
�
N — the length of the strings 
�
A and 
�
B.
The second line contains the binary string 
�
A.
The third line contains the binary string 
�
B.
Output Format
For each test case, output on a new line, YES, if you can make the string 
�
A equal to 
�
B using any number of operations and NO otherwise.

You can print each character in uppercase or lowercase. For example, YES, yes, Yes, and yES are all identical.

Constraints
1
≤
�
≤
100
1≤T≤100
1
≤
�
≤
1
0
5
1≤N≤10 
5
 
�
�
A 
i
​
  and 
�
�
B 
i
​
  contain 
0
0 and 
1
1 only.
The sum of 
�
N over all test cases won't exceed 
1
0
5
10 
5
 .
Sample 1:
Input
Output
4
2
00
00
4
1001
0111
5
11000
10010
5
11000
11010
YES
NO
YES
NO

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
		    int m = sc.nextInt();
		    sc.nextLine();
		    String a = sc.nextLine();
		    String b = sc.nextLine();
		    int counta[] = new int[2];
		    int countb[] = new int[2];
		    for(int j=0;j<m;j++){
		        if(a.charAt(j)=='1'){
		            counta[0]++;
		        }
		        else{
		            counta[1]++;
		        }
		    }
		    for(int j=0;j<m;j++){
		        if(b.charAt(j)=='1'){
		            countb[0]++;
		        }
		        else{
		            countb[1]++;
		        }
		    }
		    if(counta[0]==countb[0] && counta[1]==countb[1]){
		        System.out.println("YES");
		    }
		    else{
		        System.out.println("NO");
		    }
		}
	}
}
