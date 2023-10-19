Chef has bought a new robot, which will be used for delivering dishes to his customers. He started testing the robot by letting it move on a line.

Initially, the robot is placed at the coordinate 
�
=
�
x=X. Then, it should execute a sequence of 
�
N commands, described by a string 
�
S with length 
�
N. Each character of this string is either 'L' or 'R', denoting that the robot should walk one step to the left (decreasing 
�
x by 
1
1) or to the right (increasing 
�
x by 
1
1), respectively.

How many distinct points are visited by the robot when it has executed all the commands? A point 
�
p is visited by the robot if 
�
p is an integer and the robot's position before or after executing some command is 
�
=
�
x=p.

Input
The first line of the input contains a single integer 
�
T denoting the number of test cases. The description of 
�
T test cases follows.
The first line of each test case contains two space-separated integers 
�
N and 
�
X.
The second line contains a single string 
�
S with length 
�
N.
Output
For each test case, print a single line containing one integer ― the number of points visited by the robot.

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
100
1≤N≤100
∣
�
∣
≤
1
,
000
,
000
∣X∣≤1,000,000
�
S contains only characters 'L' and 'R'
Subtasks
Subtask #1 (100 points): original constraints

Sample 1:
Input
Output
2
6 10
RRLLLL
2 0
LL
5
3
Explanation:
Example case 1: The robot followed the path 
10
→
11
→
12
→
11
→
10
→
9
→
8
10→11→12→11→10→9→8.

Example case 2: The robot followed the path 
0
→
−
1
→
−
2
0→−1→−2.

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
		  int b = sc.nextInt();
		  
		  int arr[] = new int[a+1];
		  sc.nextLine();
		  arr[0]=b;
		  String f = sc.nextLine();
		  
		  int x=1;
		  for(int j=0;j<a;j++){
		      if(f.charAt(j)=='R'){
		          b+=1;
		          arr[x]=b;
		          x++;
		      }
		      else{
		          b-=1;
		          arr[x]=b;
		          x++;
		      }
		  }
		  HashSet<Integer> unique = new HashSet<>();
		  for(int l : arr){
		      unique.add(l);
		  }
		  System.out.println(unique.size());
		}
	}
}
