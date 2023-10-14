Input
2
1 10
11 33
Output
3
8

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
	       int count=0;
	        for(int j=a;j<=b;j++){
	            int h = j%10;
	            if(h==2 || h==3 || h==9){
	                count++;
	            }
	        }
	        System.out.println(count);
	    }
	}
}
